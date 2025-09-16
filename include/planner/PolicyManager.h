#pragma once 

#include <unordered_map>
#include <memory> 
#include <vector> 
#include "../ICostPolicy.h"

class PolicyManager {
public: 
    std::unordered_map<std::string, std::unique_ptr<ICostPolicy>> policies;
    std::vector<double> weights; 
};