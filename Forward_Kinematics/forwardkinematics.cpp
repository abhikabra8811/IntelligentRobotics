#include "forwardkinematics.h"
#include "ui_forwardkinematics.h"
#include "stdio.h"
#include "qstring.h"
#include <QErrorMessage>
#include "string.h"

const double PI = 3.1415;

ForwardKinematics::ForwardKinematics(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ForwardKinematics)
{
    ui->setupUi(this);
    createKinematicLinks();

    //Disabling push button for transformation matrix
    ui->pushButtonLinkTransformationMatrix->setDisabled(true);
}

ForwardKinematics::~ForwardKinematics()
{
    delete ui;
}

void ForwardKinematics::createKinematicLinks()
{
    listOfKinematicLinks[0] = std::make_shared<KinematicLink>();
    listOfKinematicLinks[1] = std::make_shared<KinematicLink>();
    listOfKinematicLinks[2] = std::make_shared<KinematicLink>();
    listOfKinematicLinks[3] = std::make_shared<KinematicLink>();
    listOfKinematicLinks[4] = std::make_shared<KinematicLink>();
    listOfKinematicLinks[5] = std::make_shared<KinematicLink>();
}

//This function is called when Run forward kinematics button is clicked
void ForwardKinematics::on_pushButtonCalculate_released()
{
    bool bIsInputValid = true;

    //Creating kinematic links and calculating transformation matrix for each link of the manipulator
    bIsInputValid = createKinematicLinkAndCalculateTranform();
    if(bIsInputValid == false)
    {
        ui->pushButtonLinkTransformationMatrix->setDisabled(true);
        return;
    }
    ui->pushButtonLinkTransformationMatrix->setEnabled(true);
    on_pushButtonLinkTransformationMatrix_clicked();

    //Calculating manipulator transformation matrix
    calculateManipulatorTranformationMatrix();
    //Function call to display manipulator transformation matrix
    displayManipulatorTransformationMatrix();

    //Display End Effector position
    displayEndEffectorPosition();

    //Calculating XYZ fixed angles
    calculateFixedAngles();
    displayFixedAngles();

}

//This function is called when Cancel button is clicked
void ForwardKinematics::on_pushButtonCancel_clicked()
{
    this->close();
}

//This function is called when user clicks on Calculate i-1Ti push button
void ForwardKinematics::on_pushButtonLinkTransformationMatrix_clicked()
{
    int iJointNumber = ui->spinBox->value();
    displayLinkTranformationMatrixOnUI(iJointNumber);
}

//This function creates object of each kinematic link of the manipulator and calculates link transformation matrix
bool ForwardKinematics::createKinematicLinkAndCalculateTranform()
{
    bool bIsInputValid = true;

    for(int i = 0; i < 6; ++i){

        double idAlphaIMinus1(0.0), idAIMinus1(0.0), idDI(0.0), idThetaI(0.0);

        //Retrieving paramters for link for UI
        bIsInputValid = getAndValidateParametersFromTable(i, idAlphaIMinus1, idAIMinus1, idDI, idThetaI);
        if(bIsInputValid == false)
        {
            this->show();
            return bIsInputValid;
        }

        if(listOfKinematicLinks[i]){
            listOfKinematicLinks[i]->setLinksParameters(idAlphaIMinus1,idAIMinus1,idDI,idThetaI);
            listOfKinematicLinks[i]->calculateTransformationMatrix();
        }
    }

    return bIsInputValid;
}

//This function computes manipulator transfomation matrix
void ForwardKinematics::calculateManipulatorTranformationMatrix()
{
    double zeroTtwo[4][4];
    double zeroTthree[4][4];
    double zeroTFour[4][4];
    double zeroTFive[4][4];

    multiplyMatrix(listOfKinematicLinks[0]->transformationMatrix,listOfKinematicLinks[1]->transformationMatrix, zeroTtwo);
    multiplyMatrix(zeroTtwo,listOfKinematicLinks[2]->transformationMatrix,zeroTthree);
    multiplyMatrix(zeroTthree,listOfKinematicLinks[3]->transformationMatrix,zeroTFour);
    multiplyMatrix(zeroTFour,listOfKinematicLinks[4]->transformationMatrix,zeroTFive);
    multiplyMatrix(zeroTFive,listOfKinematicLinks[5]->transformationMatrix,manipulatorTransformationMatrix);

}

//This function validates input values for each link
bool ForwardKinematics::getAndValidateParametersFromTable(int iJointNumber, double & odAlphaIMinus1, double & odAIMinus1, double & odDI, double & odTheta)
{
    bool bValid = false;
    do
    {
        odAlphaIMinus1 = (ui->tableWidgetParameters->item(iJointNumber,1)->text()).toDouble(&bValid);
        if(bValid == false)
        {
            QErrorMessage error;
            error.showMessage("Enter valid value for αi−1 (degree) for link ");
            error.exec();
            break;
        }

        odAIMinus1 = (ui->tableWidgetParameters->item(iJointNumber,2)->text()).toDouble(&bValid);
        if(bValid == false)
        {
            QErrorMessage error;
            error.showMessage("Enter valid value for ai−1 (in) for link ");
            error.exec();
            break;
        }

        odDI = (ui->tableWidgetParameters->item(iJointNumber,3)->text()).toDouble(&bValid);
        if(bValid == false)
        {
            QErrorMessage error;
            error.showMessage("Enter valid value for di (in) for link ");
            error.exec();
            break;
        }

        odTheta = (ui->tableWidgetParameters->item(iJointNumber,4)->text()).toDouble(&bValid);
        if(bValid == false)
        {
            QErrorMessage error;
            error.showMessage("Enter valid value for  θi (degree) for link ");
            error.exec();
            break;
        }
        if(iJointNumber == 0 && (odTheta > 170.0 || odTheta < -170.0))
        {
                bValid = false;
                QErrorMessage error;
                error.showMessage("Value for  θi (degree) for link 1 should be between -170 to 170");
                error.exec();
                break;
        }
        else if(iJointNumber == 1 && (odTheta > 45.0 || odTheta < -225.0))
        {
            bValid = false;
            QErrorMessage error;
            error.showMessage("Valid value for  θi (degree) for link 2 should be between -225 to 45");
            error.exec();
            break;
        }
        else if(iJointNumber == 2 && (odTheta > 75.0 || odTheta < -250.0))
        {
            bValid = false;
            QErrorMessage error;
            error.showMessage("Valid value for  θi (degree) for link 3 should be between -250 to 75");
            error.exec();
            break;
        }
        else if(iJointNumber == 3 && (odTheta > 135.0 || odTheta < -135.0))
        {
            bValid = false;
            QErrorMessage error;
            error.showMessage("Valid value for  θi (degree) for link 4 should be between -135 to 135");
            error.exec();
            break;
        }
        else if(iJointNumber == 4 && (odTheta > 100.0 || odTheta < -100.0))
        {
            bValid = false;
            QErrorMessage error;
            error.showMessage("Valid value for  θi (degree) for link 5 should be between -100 to 100");
            error.exec();
            break;
        }
        else if(iJointNumber == 5 && (odTheta > 180.0 || odTheta < -180.0))
        {
            bValid = false;
            QErrorMessage error;
            error.showMessage("aVlid value for  θi (degree) for link 6 should be between -180 to 180");
            error.exec();
            break;
        }

    }while(0);

    return bValid;
}

//This function multiplies two matrices
void ForwardKinematics::multiplyMatrix(double Matrix1[][4],double Matrix2[][4],double Multi [][4])
{
    int i(0),j,k;
    double sum;
    while(i<4)
    {
        j= 0;
        while(j<4)
        {
            sum = 0;
            k = 0;
            while(k<4)
            {
                sum = sum+ Matrix1[i][k] * Matrix2[k][j];
            k++;
            }
        Multi[i][j] = sum;
        j++;
        }

    i++;
    }
}

//This function calculate fixed orientation angles
void ForwardKinematics::calculateFixedAngles()
{
    double r11 = manipulatorTransformationMatrix[0][0];
    double r21 = manipulatorTransformationMatrix[1][0];
    double r31 = manipulatorTransformationMatrix[2][0];
    double r32 = manipulatorTransformationMatrix[2][1];
    double r33 = manipulatorTransformationMatrix[2][2];

    double betaAngleRad = atan2(-1 * r31, sqrt((r11 * r11) + (r21 * r21)));
    double alphaAngleRad = atan2(r21/cos(betaAngleRad),r11/cos(betaAngleRad));
    double gammaAngleRad = atan2(r32/cos(betaAngleRad), r33/cos(betaAngleRad));

    dGammaDeg = (gammaAngleRad * 180) / PI;
    dBetaDeg = (betaAngleRad * 180) / PI;
    dAlphaDeg = (alphaAngleRad * 180) / PI;

}

//This function displays link transformation matrix on UI
void ForwardKinematics::displayLinkTranformationMatrixOnUI(int iKinematicLinkNumber)
{
    //kinematicLink * pCurrentKinematicLink = listOfKinematicLinks[iKinematicLinkNumber -1];
    if(listOfKinematicLinks[iKinematicLinkNumber -1])
    {
        for(int iRow = 0; iRow<4; iRow++)
        {
            for(int iCol = 0; iCol<4; iCol++)
            {
                QString valueAsString = QString::number(listOfKinematicLinks[iKinematicLinkNumber -1]->transformationMatrix[iRow][iCol]);
                ui->tableWidgetLinkTransMatrix->item(iRow, iCol)->setText(valueAsString);
            }
        }
    }
}

//This function displays manipulator transformation matrix on UI
void ForwardKinematics::displayManipulatorTransformationMatrix()
{
    for(int iRow = 0; iRow<4; iRow++)
    {
        for(int iCol = 0; iCol<4; iCol++)
        {
            QString valueAsString = QString::number(manipulatorTransformationMatrix[iRow][iCol]);
            ui->tableWidgetManipulatorMatrix->item(iRow, iCol)->setText(valueAsString);
        }
    }
}

//This function displays end effector position on UI
void ForwardKinematics::displayEndEffectorPosition()
{
    for(int iRow = 0; iRow < 3; iRow++)
    {
        QString valueAsString = QString::number(manipulatorTransformationMatrix[iRow][3]);
        ui->tableWidgetEndEffector->item(iRow, 0)->setText(valueAsString);
    }
}

//This function is used to round off values
double ForwardKinematics::RoundOff(double dNumber, int iDecimalPlaces)
{
    double mul = pow(10, iDecimalPlaces);
    return (floor(dNumber * mul)/mul);
}

//This function displays values of fixed orientation angles on UI
void ForwardKinematics::displayFixedAngles()
{
    QString valueAsStringGamma = QString::number(dGammaDeg);
    QString valueAsStringBeta= QString::number(dBetaDeg);
    QString valueAsStringAlpha = QString::number(dAlphaDeg);

    ui->tableWidgetAngles->item(0,0)->setText(valueAsStringGamma);
    ui->tableWidgetAngles->item(1,0)->setText(valueAsStringBeta);
    ui->tableWidgetAngles->item(2,0)->setText(valueAsStringAlpha);

}
