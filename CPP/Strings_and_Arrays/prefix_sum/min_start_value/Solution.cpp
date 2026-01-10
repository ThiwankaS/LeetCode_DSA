#include "Solution.hpp"

int Solution::minStartValue(std::vector<int>& nums) {
    int runningTotal = 0;
    int min = std::numeric_limits<int>::max();

    for(size_t i = 0; i < nums.size(); ++i) {
        runningTotal += nums.at(i);
        min = std::min(min, runningTotal);
    } 
    return ( std::max(1, 1 - min));
}