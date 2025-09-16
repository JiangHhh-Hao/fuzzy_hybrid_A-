#pragma once
#include "ICostPolicy.h" 

class ObstacleCostPolicy : ICostPolicy {
public: 
    double getCost(double v) override;

};