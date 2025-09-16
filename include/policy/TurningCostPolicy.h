#pragma once
#include "ICostPolicy.h" 

class TurningCostPolicy : ICostPolicy {
public: 
    double getCost(double v) override;

};