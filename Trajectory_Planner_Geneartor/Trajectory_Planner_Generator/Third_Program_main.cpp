#include <iostream>
#include <stdio.h>
#include <math.h>
#include "Declaration.h"
#include "INV_KIN_PROC.h"
#include <list>
#include <vector>
#include "ForwardKinematics.h"

using namespace std;

int iNumOfKnotPoints = 0;
void PerformInverKinematicsOnKnotPoints(double iKnotPoints[MaxKnotPt][3], double oJointAngles[MaxKnotPt][3]);
void CalculateJointVelocities(double iJointAngles[MaxKnotPt][3], double idTime[MaxKnotPt - 1], double oJointVelcoties[MaxKnotPt][3]);
void CUBCOEF(double qs, double qg, double qdots, double qdotg, double T, vec4 cc);
void TRAJEC(double t, vec4 cc, double &q, double &qdot, double &qddot);
void ComputeEndEffectorLinearAndAngularVelocity(vec3 jointAngles, vec3 JointVelocities, vec3 endeffectorVelocity);
int main()
{
	cout << "Enter the number of knot points:" << endl;
	cin >> iNumOfKnotPoints;

	if (iNumOfKnotPoints > 5)
	{
		cout << "Maximum 5 knot point are allowed" << endl;
		return 0;
	}

	double knotPoints[MaxKnotPt][3];

	for (int iCntKnotPt = 0; iCntKnotPt < iNumOfKnotPoints; iCntKnotPt++)
	{
		cout << "Enter knot in (X, Y, Phi) format" << endl;
		cin >> knotPoints[iCntKnotPt][0] >> knotPoints[iCntKnotPt][1] >> knotPoints[iCntKnotPt][2];
	}

	double dTimeForEachSeg[MaxKnotPt - 1];
	for (int iCntPathSeg = 0; iCntPathSeg < iNumOfKnotPoints - 1; iCntPathSeg++)
	{
		cout << "Enter time duration path segment" << endl;
		cin >> dTimeForEachSeg[iCntPathSeg];
	}
	
	double jointAngles[MaxKnotPt][3];
	PerformInverKinematicsOnKnotPoints(knotPoints, jointAngles);

	double jointVelocities[MaxKnotPt][3];
	CalculateJointVelocities(jointAngles, dTimeForEachSeg, jointVelocities);

	double ccForAllPaths[MaxKnotPt - 1][3][4];
	for (int iCntPathSeg = 0; iCntPathSeg < iNumOfKnotPoints - 1; iCntPathSeg++)
	{
		for (int iCntJoint = 0; iCntJoint < 3; iCntJoint++)
		{
			double qs = jointAngles[iCntPathSeg][iCntJoint];
			double qg = jointAngles[iCntPathSeg + 1][iCntJoint];
			double qdots = jointVelocities[iCntPathSeg][iCntJoint];
			double qdotg = jointVelocities[iCntPathSeg + 1][iCntJoint];
			double time = dTimeForEachSeg[iCntPathSeg];
			vec4 currentSegCC;
			CUBCOEF(qs, qg, qdots, qdotg, time, currentSegCC);
			ccForAllPaths[iCntPathSeg][iCntJoint][0] = currentSegCC[0];
			ccForAllPaths[iCntPathSeg][iCntJoint][1] = currentSegCC[1];
			ccForAllPaths[iCntPathSeg][iCntJoint][2] = currentSegCC[2];
			ccForAllPaths[iCntPathSeg][iCntJoint][3] = currentSegCC[3];
		}
	}

	double trajectory[75][3];
	double trajectoryVelocity[75][3];
	double trajectoryAcc[75][3];
	int iPtNumber = 0;
	int iMaxPoints = ((iNumOfKnotPoints - 1) * dTimeForEachSeg[0] * 5) + (iNumOfKnotPoints - 1);
	for (int iCntPathSeg = 0; iCntPathSeg < iNumOfKnotPoints - 1; iCntPathSeg++)
	{
		double t = 0.0;

		do
		{
			for (int iCntJoint = 0; iCntJoint < 3; iCntJoint++)
			{
				vec4 current;
				double q, qdot, qddot;

				current[0] = ccForAllPaths[iCntPathSeg][iCntJoint][0];
				current[1] = ccForAllPaths[iCntPathSeg][iCntJoint][1];
				current[2] = ccForAllPaths[iCntPathSeg][iCntJoint][2];
				current[3] = ccForAllPaths[iCntPathSeg][iCntJoint][3];

				TRAJEC(t, current, q, qdot, qddot);
				trajectory[iPtNumber][iCntJoint] = q;
				trajectoryVelocity[iPtNumber][iCntJoint] = qdot;
				trajectoryAcc[iPtNumber][iCntJoint] = qddot;
			}
			
			t = t + 0.2;
			iPtNumber++;
		} while (t <= dTimeForEachSeg[iCntPathSeg] + 0.1);
	}

	int iDisplayPt = 0;
	int segment = 0;
	do
	{
		vec3 currentJointAngles;
		vec3 currentCartesianPt;
		currentJointAngles[0] = trajectory[iDisplayPt][0];
		currentJointAngles[1] = trajectory[iDisplayPt][1];
		currentJointAngles[2] = trajectory[iDisplayPt][2];
		WHERE(currentJointAngles, currentCartesianPt);

		cout << "\nX, Y, Phi for point is:" << endl;
		Display(currentCartesianPt);

		vec3 currentJointVelocities;
		currentJointVelocities[0] = trajectoryVelocity[iDisplayPt][0];
		currentJointVelocities[1] = trajectoryVelocity[iDisplayPt][1];
		currentJointVelocities[2] = trajectoryVelocity[iDisplayPt][2];

		vec3 endEffectorVelocities;
		ComputeEndEffectorLinearAndAngularVelocity(currentJointAngles, currentJointVelocities, endEffectorVelocities);
		
		cout << "\n End effector velocity(Xdot, Ydot, Phi-dot) for point is:" << endl;
		Display(endEffectorVelocities);

		if (iDisplayPt == 15 || iDisplayPt == 31 || iDisplayPt == 47)
		{
			iDisplayPt = iDisplayPt + 6;
		}
		else
		{
			iDisplayPt = iDisplayPt + 5;
		}


	} while (iDisplayPt < iMaxPoints);

	return 0;
}

void PerformInverKinematicsOnKnotPoints(double iKnotPoints[MaxKnotPt][3], double oJointAngles[MaxKnotPt][3])
{
	vec3 currentJointPos;
	currentJointPos[0] = 0.0; currentJointPos[1] = 0.0; currentJointPos[2] = 0.0;
	for (int iCntKnotPt = 0; iCntKnotPt < iNumOfKnotPoints; iCntKnotPt++)
	{
		vec3 currentKnotPoint;
		currentKnotPoint[0] = iKnotPoints[iCntKnotPt][0]; 
		currentKnotPoint[1] = iKnotPoints[iCntKnotPt][1];
		currentKnotPoint[2] = iKnotPoints[iCntKnotPt][2];
		frame knotPointFrame;
		WHATFRAME(currentKnotPoint, knotPointFrame);

		vec3 near, far;
		bool sol;
		INVKIN(knotPointFrame, currentJointPos, near, far, sol);
		oJointAngles[iCntKnotPt][0] = near[0];
		oJointAngles[iCntKnotPt][1] = near[1];
		oJointAngles[iCntKnotPt][2] = near[2];
		
	}
}

void CalculateJointVelocities(double iJointAngles[MaxKnotPt][3], double idTime[MaxKnotPt -1], double oJointVelcoties[MaxKnotPt][3])
{
	for (int iCntKnotPt = 0; iCntKnotPt < iNumOfKnotPoints; iCntKnotPt++)
	{
		if (iCntKnotPt == 0 || iCntKnotPt == iNumOfKnotPoints -1)
		{
			oJointVelcoties[iCntKnotPt][0] = 0.0;
			oJointVelcoties[iCntKnotPt][1] = 0.0;
			oJointVelcoties[iCntKnotPt][2] = 0.0;
			continue;
		}
		for (int iCntJoint = 0; iCntJoint < iNumOfKnotPoints; iCntJoint++)
		{
			oJointVelcoties[iCntKnotPt][iCntJoint] = ((abs((iJointAngles[iCntKnotPt][iCntJoint] - iJointAngles[iCntKnotPt - 1][iCntJoint])) / idTime[iCntKnotPt]) + (abs((iJointAngles[iCntKnotPt + 1][iCntJoint] - iJointAngles[iCntKnotPt][iCntJoint])) / idTime[iCntKnotPt])) * 0.5;
		}
	}
}

void CUBCOEF(double qs, double qg, double qdots, double qdotg, double T, vec4 cc)
{
	cc[0] = qs;
	cc[1] = qdots;
	cc[2] = (3 * (qg - qs) / (T * T)) - (2 * qdots / T) - (qdotg / T);
	cc[3] = (-2 * (qg - qs) / (T * T * T)) + ((qdots + qdotg) / (T *  T));
}

void TRAJEC(double t, vec4 cc, double &q, double &qdot, double &qddot)
{
	q = cc[0] + (cc[1] * t) + (cc[2] * t * t) + (cc[3] * t * t * t);
	qdot = cc[1] + (2 * cc[2] * t) + (3 * cc[3] * t *t);
	qddot = (2 * cc[2]) + (6 * cc[3] * t);
}

void ComputeEndEffectorLinearAndAngularVelocity(vec3 jointAngles, vec3 JointVelocities, vec3 endeffectorVelocity )
{
	double xdot = -((sin(jointAngles[0]) * JointVelocities[0]) + (sin(jointAngles[1]) * JointVelocities[2]));
	double ydot = (cos(jointAngles[0]) * JointVelocities[0]) + (cos(jointAngles[1]) * JointVelocities[2]);
	double phidot = JointVelocities[0] + JointVelocities[1] + JointVelocities[2];

	endeffectorVelocity[0] = xdot;
	endeffectorVelocity[1] = ydot;
	endeffectorVelocity[2] = phidot;

}