#pragma once

class kinematicLink
{
public:

	class forwardkinematics;
	kinematicLink() = default;
	~kinematicLink() = default;

	double transformationMatrix[3][3];

	//Sets Kinematic Link paramters
	void SetLinksParameters(double idThetaI, double idAIMinus1);

	// Calculate tranformation matrix for i-1Ti
	void CalculateTransformationMatrix();

	static double kinematicLink::RoundOff(double dNumber, int iDecimalPlaces = 4);

private:
	double dThetaI{ 0 }, dAIMinus1{ 0 };

};

