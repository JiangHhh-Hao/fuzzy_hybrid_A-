#pragma once 

#include "PolicyManager.h"
#include <string> 
#include <vector> 

class Map {
public: 
    bool loadXML(std::string filename);
    void generateHeatMap(PolicyManager pm);


};