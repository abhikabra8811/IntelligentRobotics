#pragma once
#include"Declaration.h"
#include "kinematicLink.h"
#include <memory>

class ForwardKinematics
{
public:
	ForwardKinematics() = default;
	~ForwardKinematics() = default;

	static double RoundOff(double dNumber, int iDecimalPlaces = 4);

	void KIN(vec3 theta, frame grelb);

private:
	// Following variables stores the values of theta as per input from the user
	double dTheta1, dTheta2, dTheta3;

	double dGammaDeg, dBetaDeg, dAlphaDeg;

	//Below variable are pointers to Kinematiclink class for each link of the manipulator
	std::shared_ptr<kinematicLink> spkinematiclink1 = nullptr;
	std::shared_ptr<kinematicLink> spkinematiclink2 = nullptr;
	std::shared_ptr<kinematicLink> spkinematiclink3 = nullptr;

	//Array of pointers of kinematiclink class
	std::shared_ptr<kinematicLink> listOfKinematicLinks[3];

	// array to store Manipulator transformation matrix 0Tm
	double manipulatorTransformationMatrix[3][3];

	bool CreateKinematicLinkAndCalculateTranform(vec3 theta);

	void CalculateManipulatorTranformationMatrix(frame grelb);

	void MultiplyMatrix(frame Matrix1, frame Matrix2, frame result);


};

