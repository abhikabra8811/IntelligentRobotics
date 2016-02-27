#include "kinematiclink.h"
#include <math.h>
#include "forwardkinematics.h"
#include "Declaration.h"

void kinematicLink::CalculateTransformationMatrix()
{

	//First row of tranformation matrix start
	transformationMatrix[0][0] = cos(dThetaI);
	transformationMatrix[0][1] = -1 * sin(dThetaI);
	transformationMatrix[0][2] = dAIMinus1;
	//First row of tranformation matrix end

	//second row of tranformation matrix start
	transformationMatrix[1][0] = sin(dThetaI);
	transformationMatrix[1][1] = cos(dThetaI);
	transformationMatrix[1][2] = 0.0;
	//second row of tranformation matrix end

	//Third row of tranformation matrix start
	transformationMatrix[2][0] = 0.0;
	transformationMatrix[2][1] = 0.0;
	transformationMatrix[2][2] = 1.0;
	//third row of tranformation matrix end
}

void kinematicLink::SetLinksParameters(double idThetaI, double idAIMinus1)
{
	dThetaI = idThetaI;
	dAIMinus1 = idAIMinus1;
}

double kinematicLink::RoundOff(double dNumber, int iDecimalPlaces)
{
	double mul = pow(10.0, iDecimalPlaces);
	if (dNumber < 0)
	{
		return (floor(dNumber * mul) / mul);
	}
	else
	{
		return(ceil(dNumber * mul) / mul);
	}
}