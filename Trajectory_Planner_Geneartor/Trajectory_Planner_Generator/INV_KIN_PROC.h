#include "Declaration.h"

//Procedure to calculate inverse kinematics
void INVKIN(frame grelb, vec3 current, vec3 near, vec3 far, bool &sol);

//Procedure to calculate forward kinematics
void KIN(vec3 theta, frame grelb);

//Converts joints spaces representation to vector representation
void WHERE(vec3 theta, vec3 gvec);

//Coverts gripper location to matrix representation
void WHATFRAME(vec3 gvec, frame grelb);

//Displays matrix and vector
void Display(frame output);
void Display(vec3 output);