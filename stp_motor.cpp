#include "stp_motor.h"
#include <iostream>

using namespace std;
using namespace motor;

void stp_motor::init()
{
    //stp init function
}

void stp_motor::movePose(float goal)
{
    goal = this -> goal_;


}

float stp_motor::curPose()
{


    return this -> positon_;
}