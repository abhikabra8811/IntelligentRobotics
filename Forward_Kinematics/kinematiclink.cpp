#include "kinematiclink.h"
#include "math.h"
#include "forwardkinematics.h"

const double PI= 3.14159265;

void KinematicLink::calculateTransformationMatrix()
{
    //First row of tranformation matrix start
    transformationMatrix[0][0] = cos(dThetaI * PI/ 180);
    transformationMatrix[0][1] = -sin(dThetaI * PI/ 180);
    transformationMatrix[0][2] = 0;
    transformationMatrix[0][3] = dAIminus1;
    //First row of tranformation matrix end

    //second row of tranformation matrix start
    transformationMatrix[1][0] = RoundOff(RoundOff(sin(dThetaI  * PI/ 180)) * RoundOff(cos(dAplhaIMinus1  * PI/ 180)));
    transformationMatrix[1][1] = RoundOff(RoundOff(cos(dThetaI * PI/ 180)) * RoundOff(cos(dAplhaIMinus1 * PI/ 180)));
    transformationMatrix[1][2] = -1 * RoundOff(sin(dAplhaIMinus1 * PI/ 180));
    transformationMatrix[1][3] = -1 * RoundOff(RoundOff(sin(dAplhaIMinus1 * PI/ 180))* RoundOff(dDI));
    //second row of tranformation matrix end

    //Third row of tranformation matrix start
    transformationMatrix[2][0] = RoundOff(RoundOff(sin(dThetaI * PI/ 180))*RoundOff(sin(dAplhaIMinus1 * PI/ 180)));
    transformationMatrix[2][1] = RoundOff(RoundOff(cos(dThetaI * PI/ 180))*RoundOff(sin(dAplhaIMinus1 * PI/ 180)));
    transformationMatrix[2][2] = RoundOff(cos(dAplhaIMinus1 * PI/ 180));
    transformationMatrix[2][3] = RoundOff(RoundOff(cos(dAplhaIMinus1 * PI/ 180))* RoundOff(dDI));
    //third row of tranformation matrix end

    //fourth row of tranformation matrix start
    transformationMatrix[3][0] = 0;
    transformationMatrix[3][1] = 0;
    transformationMatrix[3][2] = 0;
    transformationMatrix[3][3] = 1;
    //fourth row of tranformation matrix end
}

void KinematicLink::setLinksParameters(double idAlphaIMinus1, double idAIMinus1, double idDI, double idThetaI)
{
    this->dAplhaIMinus1 = idAlphaIMinus1;
    this->dAIminus1 = idAIMinus1;
    this->dDI = idDI;
    this->dThetaI = idThetaI;
}

double KinematicLink::RoundOff(double dNumber, int iDecimalPlaces)
{
    double mul = pow(10, iDecimalPlaces);
    return (floor(dNumber * mul)/mul);
}
