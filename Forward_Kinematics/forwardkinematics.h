#ifndef FORWARDKINEMATICS_H
#define FORWARDKINEMATICS_H

#include <QMainWindow>
#include <memory>
#include "kinematiclink.h"
#include <vector>

namespace Ui {
class ForwardKinematics;
}

class ForwardKinematics : public QMainWindow
{
    Q_OBJECT

public:
    explicit ForwardKinematics(QWidget *parent = 0);
    ~ForwardKinematics();

    enum matrices
    {
        linkTransfomationMatrix =0,
        ManipulatorTransformationMatrix,
        endEffectorPositionMatrix,
    };

    static double RoundOff(double dNumber, int iDecimalPlaces);

private slots:
    void on_pushButtonCalculate_released();

    void on_pushButtonCancel_clicked();

    void on_pushButtonLinkTransformationMatrix_clicked();

private:
    Ui::ForwardKinematics *ui;
    // Following variables stores the values of theta as per input from the user
    double dTheta1, dTheta2, dTheta3, dTheta4, dTheta5, dTheta6;

    double dGammaDeg,dBetaDeg, dAlphaDeg;

    //Array of pointers of kinematiclink class
    std::shared_ptr<KinematicLink> listOfKinematicLinks[6];

    // array to store Manipulator transformation matrix 0Tm
    double manipulatorTransformationMatrix[4][4];

    void createKinematicLinks();

    bool createKinematicLinkAndCalculateTranform();

    void calculateManipulatorTranformationMatrix();

    void calculateFixedAngles();

    bool getAndValidateParametersFromTable(int iJointNumber, double & odAlphaMinus1, double & odAIMinus1, double & odDI, double & odTheta);

    void multiplyMatrix(double Matrix1[][4],double Matrix2[][4],double Multi[][4]);

    void displayLinkTranformationMatrixOnUI(int iKinematicLinkNumber);

    void displayManipulatorTransformationMatrix();

    void displayEndEffectorPosition();

    void displayFixedAngles();

};

#endif // FORWARDKINEMATICS_H
