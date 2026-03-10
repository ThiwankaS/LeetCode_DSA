#include "Solution.hpp"

double Solution::findMaxAverage(std::vector<int>& nums, int k) {
    double running_total = 0;

    for(int i = 0; i < k; ++i) {
        running_total += nums.at(i);
    }
    
    double maximum = static_cast<double>(running_total / k );

    for(int i = k; i < nums.size(); ++i) {
        running_total += (nums.at(i) - nums.at(i - k));
        maximum = std::max(maximum, static_cast<double>(running_total / k));
    }

    return (maximum);
}