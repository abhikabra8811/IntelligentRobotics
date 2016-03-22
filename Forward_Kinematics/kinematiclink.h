#ifndef KINEMATICLINK_H
#define KINEMATICLINK_H

#include "ui_forwardkinematics.h"

class KinematicLink
{
public:

    class forwardkinematics;
    KinematicLink() = default;
    ~KinematicLink() = default;

    double transformationMatrix[4][4];

    //Sets Kinematic Link paramters
    // idAlphaIMinus1
    // idAIMinus1
    // idDI
    // idThetaI
    void setLinksParameters(double idAlphaIMinus1, double idAIMinus1, double idDI, double idThetaI);

    // Calculate tranformation matrix for i-1Ti
    void calculateTransformationMatrix();

    static double RoundOff(double dNumber, int iDecimalPlaces = 5);

private:
    double dAplhaIMinus1;
    double dAIminus1;
    double dDI;
    double dThetaI;
};

#endif // KINEMATICLINK_H
