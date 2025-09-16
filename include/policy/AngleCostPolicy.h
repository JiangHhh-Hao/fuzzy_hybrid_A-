#pragma once
#include "ICostPolicy.h" 

class AngleCostPolicy : ICostPolicy {
public: 
    double getAngleChangeCost(double prev_angle, double curr_angle) ;

};