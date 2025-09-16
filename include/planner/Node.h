#pragma once 

class Node {
    double x;           // x, aka col (continous space)
    double y;           // y, aka row (continous space)
    double yaw;         // angle -180 to 180, 0 is -x, 180 is +x 
    double f;           // f cost 
    double g;           // g cost 
    int visited_times;  // a node can be visited multiple times
    bool closed;        // If it is closed
};

// Temperary Node State
class State {
    double x;           // x, aka col (continous space)
    double y;           // y, aka row (continous space)
    double yaw;         // angle -180 to 180, 0 is -x, 180 is +x 
    double f;           // f cost 
    double g;           // g cost 

    bool operator<(const State& other) const {
        return f > other.f || (f == other.f && g > other.g);
    }
};