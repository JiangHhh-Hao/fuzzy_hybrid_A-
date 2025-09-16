#pragma once 

class ICostPolicy {
public: 
    virtual double getCost(double v) = 0;

};