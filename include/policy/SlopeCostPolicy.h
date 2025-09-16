#pragma once
#include "ICostPolicy.h" 

class SlopeCostPolicy : ICostPolicy {
public: 
    double getCost(double v) override;

};