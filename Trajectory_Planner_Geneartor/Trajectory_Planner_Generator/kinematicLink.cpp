#include "kinematiclink.h"
#include <math.h>
#include "forwardkinematics.h"
#include "Declaration.h"

kinematicLink::kinematicLink()
{
	dThetaI = 0.0;
	idAIMinus1 = 0.0;
}

kinematicLink::~kinematicLink()
{
	dThetaI = 0.0;
	idAIMinus1 = 0.0;
}

void kinematicLink::CalculateTransformationMatrix()
{

	//First row of tranformation matrix start
	transformationMatrix[0][0] = cos(dThetaI);
	transformationMatrix[0][1] = -1 * sin(dThetaI);
	transformationMatrix[0][2] = idAIMinus1;
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
	this->dThetaI = idThetaI;
	this->idAIMinus1 = idAIMinus1;
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