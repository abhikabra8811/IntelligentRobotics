#pragma once

#include "kinematicLink.h"

class ForwardKinematics
{
public:
	ForwardKinematics();
	~ForwardKinematics();

	static double RoundOff(double dNumber, int iDecimalPlaces = 4);

	void KIN(double theta[3], double grelb[][3]);

private:
	// Following variables stores the values of theta as per input from the user
	double dTheta1, dTheta2, dTheta3;

	double dGammaDeg, dBetaDeg, dAlphaDeg;
	//Below variable are pointers to Kinematiclink class for each link of the manipulator
	kinematicLink * pKinematicLink1;
	kinematicLink * pKinematicLink2;
	kinematicLink * pKinematicLink3;

	//Array of pointers of kinematiclink class
	kinematicLink * listOfKinematicLinks[3];

	// array to store Manipulator transformation matrix 0Tm
	double manipulatorTransformationMatrix[3][3];

	bool CreateKinematicLinkAndCalculateTranform(double theta[3]);

	void CalculateManipulatorTranformationMatrix(double grelb[][3]);

	void MultiplyMatrix(double Matrix1[][3], double Matrix2[][3], double Multi[][3]);


};

