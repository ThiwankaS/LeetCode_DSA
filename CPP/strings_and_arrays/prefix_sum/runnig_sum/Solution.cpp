#include "Solution.hpp"

std::vector<int> Solution::runningSum(std::vector<int>& nums) {
    std::vector<int> result;
    int runningTotal = 0;

    for(size_t i = 0; i < nums.size(); ++i) {
        runningTotal += nums.at(i);
        result.push_back(runningTotal);
    }

    return (result);
}