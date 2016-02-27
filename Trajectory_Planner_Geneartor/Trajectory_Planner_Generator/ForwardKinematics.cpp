#include "ForwardKinematics.h"
#include "kinematicLink.h"
#include "math.h"
#include "Declaration.h"

ForwardKinematics::ForwardKinematics()
{
	pKinematicLink1 = nullptr;
	pKinematicLink2 = nullptr;
	pKinematicLink3 = nullptr;
}

ForwardKinematics::~ForwardKinematics()
{
	// Releasing memory
	if (pKinematicLink1)
	{
		delete pKinematicLink1;
		pKinematicLink1 = nullptr;
	}

	if (pKinematicLink2)
	{
		delete pKinematicLink2;
		pKinematicLink2 = nullptr;
	}

	if (pKinematicLink3)
	{
		delete pKinematicLink3;
		pKinematicLink3 = nullptr;
	}
}

//This function is called when Run forward kinematics button is clicked
void ForwardKinematics::KIN(vec3 theta, frame grelb)
{
	bool bIsInputValid = true;

	//Creating kinematic links and calculating transformation matrix for each link of the manipulator
	bIsInputValid = CreateKinematicLinkAndCalculateTranform(theta);

	//Calculating manipulator transformation matrix
	CalculateManipulatorTranformationMatrix(grelb);

}

//This function creates object of each kinematic link of the manipulator and calculates link transformation matrix
bool ForwardKinematics::CreateKinematicLinkAndCalculateTranform(vec3 theta)
{
	bool bIsInputValid = true;
	double idAlphaIMinus1(0.0), idAIMinus1(0.0), idDI(0.0);

	//Creating object of the KinematicLink class and setting values of the parameters for link1
	if (pKinematicLink1 == nullptr)
	{
		pKinematicLink1 = new kinematicLink();
	}
	pKinematicLink1->SetLinksParameters(theta[0], 0.0);
	//Calculating transformation matrix for link1
	pKinematicLink1->CalculateTransformationMatrix();
	listOfKinematicLinks[0] = pKinematicLink1;

	//Creating object of the KinematicLink class and setting values of the parameters for link2
	if (pKinematicLink2 == nullptr)
	{
		pKinematicLink2 = new kinematicLink();
	}
	pKinematicLink2->SetLinksParameters(theta[1], l1);
	//Calculating transformation matrix for link2
	pKinematicLink2->CalculateTransformationMatrix();
	listOfKinematicLinks[1] = pKinematicLink2;

	//Creating object of the KinematicLink class and setting values of the parameters for link3
	if (pKinematicLink3 == nullptr)
	{
		pKinematicLink3 = new kinematicLink();
	}
	pKinematicLink3->SetLinksParameters(theta[2], l2);
	//Calculating transformation matrix for link3
	pKinematicLink3->CalculateTransformationMatrix();
	listOfKinematicLinks[2] = pKinematicLink3;

	return bIsInputValid;

}

//This function computes manipulator transfomation matrix
void ForwardKinematics::CalculateManipulatorTranformationMatrix(frame grelb)
{
	double zeroTtwo[3][3];

	MultiplyMatrix(listOfKinematicLinks[0]->transformationMatrix, listOfKinematicLinks[1]->transformationMatrix, zeroTtwo);
	MultiplyMatrix(zeroTtwo, listOfKinematicLinks[2]->transformationMatrix, grelb);

}

//This function multiplies two matrices
void ForwardKinematics::MultiplyMatrix(frame Matrix1, frame Matrix2, frame Multi)
{
	int i(0), j, k;
	double sum;
	while (i<3)
	{
		j = 0;
		while (j<3)
		{
			sum = 0;
			k = 0;
			while (k<3)
			{
				sum = sum + Matrix1[i][k] * Matrix2[k][j];
				k++;
			}
			Multi[i][j] = sum;
			j++;
		}

		i++;
	}
}



//This function is used to round off values
double ForwardKinematics::RoundOff(double dNumber, int iDecimalPlaces)
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