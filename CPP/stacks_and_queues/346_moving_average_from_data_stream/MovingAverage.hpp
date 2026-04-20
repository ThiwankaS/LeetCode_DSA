#pragma once
#include <queue>

class MovingAverage {
    private:
        int window_size = 0;
        int element_count = 0;
        int runnig_total = 0; 
        std::queue<int> buffer;

    public:
        MovingAverage (int size) : window_size(size) {}
        double next (int val);
};
