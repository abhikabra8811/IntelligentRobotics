#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <math.h>
#include "Declaration.h"
#include "ForwardKinematics.h" 

using namespace std;

//This function is used to round off values
double RoundOff(double dNumber, int iDecimalPlaces = 5)
{
	double mul = pow(10.0, iDecimalPlaces);
	return (floor(dNumber * mul + 0.5) / mul);
}

//Procedure to calculate inverse kinematics
void INVKIN(frame grelb, vec3 current, vec3 near, vec3 far, bool &sol);

//Procedure to calculate forward kinematics
void KIN(vec3 theta, frame grelb);

//Converts joints spaces representation to vector representation
void WHERE(vec3 theta, vec3 gvec);

//Coverts gripper location to matrix representation
void WHATFRAME(vec3 gvec, frame grelb);

//Displays matrix and vector
void Display(frame output);
void Display(vec3 output);


int main()
{
	
	frame grelb;
	vec3 current;
	current[0] = 0.0; current[1] = 0.0; current[2] = 0.0;

	vec3 gvec;
	cout << "Enter the value of X, Y and Phi: " << endl;
	cin >> gvec[0] >> gvec[1] >> gvec[2];

	cout << "\n Input vector is X,Y and Phi" << endl;
	Display(gvec);

	vec3 near;
	vec3 far;
	bool sol = false;
	vec3 gvecoutput;

	WHATFRAME(gvec, grelb);
	cout << "\n Output of WHATFRAME i.e Gripper location --> matrix format" << endl;
	Display(grelb);


	INVKIN(grelb, current, near, far, sol);
	if (sol == false)
	{
		cout << "\n No solution exists for inverse kinematics" << endl;
		return 0;
	}

	cout << "\n Solution exists for inverse kinematics" << endl;
	cout << "\n Near soulution for inverse kinematics: " << endl;
	vec3 nearInDegees;
	nearInDegees[0] = RoundOff(near[0]) * 180 / PI;
	nearInDegees[1] = RoundOff(near[1]) * 180 / PI;
	nearInDegees[2] = RoundOff(near[2]) * 180 / PI;
	Display(nearInDegees);

	cout << "\n Far solution for inverse kinematics: " << endl;
	vec3 farInDegrees;
	farInDegrees[0] = RoundOff(far[0]) * 180 / PI;
	farInDegrees[1] = RoundOff(far[1]) * 180 / PI;
	farInDegrees[2] = RoundOff(far[2]) * 180 / PI;
	Display(farInDegrees);

	WHERE(near, gvecoutput);
	cout << "\n Output of WHERE i.e. joint space representation --> gripper location(x, y, phi)" << endl;
	Display(gvecoutput);

	return 0;
}

//Performs inverse kinematics
void INVKIN(frame grelb, vec3 current, vec3 near, vec3 far, bool &sol)
{
	double r11, r12, r21, r22, x, y;
	r11 = grelb[0][0];
	r12 = grelb[0][1];
	r21 = grelb[1][0];
	r22 = grelb[1][1];
	x = grelb[0][2];
	y = grelb[1][2];
	
	//calculating value of cos(theta2)
	double c2;
	c2 = (pow(x, 2) + pow(y, 2) - pow(l1, 2) - pow(l2, 2)) / (2 * l1 * l2);

	//return if c2 < -1 or c2 > 1 since solution doesnot exists
	if (c2 < -1 || c2 > 1)
	{
		sol = false;
		return;
	}

	//calculating value of sin(theta2)
	double s2 = sqrt(1 - pow(c2, 2));

	//retrieving 2 values for joint angle theta2
	double theta2First = atan2(s2, c2);
	double theta2Second = atan2(-1 * s2, c2);

	//calcuating constants k1 and k2
	double k1 = l1 + l2 * cos(theta2First);
	double k2First = l2 * s2;
	double k2Second = l2 * s2 * -1;

	//calculating 2 values of theta1 for 2 solutions
	double theta1First = atan2(y, x) - atan2(k2First, k1);
	double theta1Second = atan2(y, x) - atan2(k2Second, k1);

	double phi = atan2(r21, r22);

	//Calculating theta3
	double theta3First = phi - theta1First - theta2First;
	double theta3Second = phi - theta1Second - theta2Second;

	//populating 2 solutions
	vec3 solution1, solution2;
	solution1[0] = theta1First; solution1[1] = theta2First; solution1[2] = theta3First;
	solution2[0] = theta1Second; solution2[1] = theta2Second; solution2[2] = theta3Second;

	//calculating joint distance with current manipulator position for both the solutions in radians
	double distance1 = abs(solution1[0] - current[0]) + abs(solution1[1] - current[1]) + abs(solution1[2] - current[2]);
	double distance2 = abs(solution2[0] - current[0]) + abs(solution2[1] - current[1]) + abs(solution2[2] - current[2]);

	//Selecting near and far solutions depending on joint distance computed above
	if (distance1 < distance2)
	{
		near[0] = solution1[0]; near[1] = solution1[1]; near[2] = solution1[2];
		far[0] = solution2[0]; far[1] = solution2[1]; far[2] = solution2[2];
	}
	else
	{
		near[0] = solution2[0]; near[1] = solution2[1]; near[2] = solution2[2];
		far[0] = solution1[0]; far[1] = solution1[1]; far[2] = solution1[2];
	}

	//set value of boolean to true since solution exists for inverse kinematics
	sol = true;
}

//Converts joints spaces representation to vector representation
void WHERE(vec3 theta, vec3 gvec)
{
	frame grelb;
	KIN(theta, grelb);

	cout << "\n Output of KIN i.e. forward kinematics: " << endl;
	Display(grelb);

	double r21 = grelb[1][0]; //sin(phi)
	double r22 = grelb[1][1]; //cos(phi)
	double dPhi = atan2(r21, r22);

	gvec[0] = grelb[0][2];
	gvec[1] = grelb[1][2];
	gvec[2] = dPhi * 180 / PI;
	
}

//Coverts gripper location to matrix representation
void WHATFRAME(vec3 gvec, frame grelb)
{
	double dPhi = gvec[2];
	double dPhiRad = dPhi * PI / 180;

	grelb[0][0] = RoundOff(cos(dPhiRad));
	grelb[0][1] = -1.0 * sin(dPhiRad);
	grelb[0][2] = gvec[0];

	grelb[1][0] = sin(dPhiRad);
	grelb[1][1] = cos(dPhiRad);
	grelb[1][2] = gvec[1];

	grelb[2][0] = 0.0;
	grelb[2][1] = 0.0;
	grelb[2][2] = 1.0;
}

//Performs forward kinematics
void KIN(vec3 theta, frame grelb)
{
	//creating object of forwardkinematics class
	ForwardKinematics forwardkinematics;
	forwardkinematics.KIN(theta, grelb);
}

void Display(frame output)
{
	for (int iRowCount = 0; iRowCount < 3; iRowCount++)
	{
		for (int iColCount = 0; iColCount < 3; iColCount++)
		{
			printf("%5f", RoundOff(output[iRowCount][iColCount]));
			cout << "\t";
		}
		cout << endl;
	}
}

void Display(vec3 output)
{
	for (int iRowCount = 0; iRowCount < 3; iRowCount++)
	{
		printf("%5f", RoundOff(output[iRowCount]));
		cout << "\n";
	}
	cout << endl;
}