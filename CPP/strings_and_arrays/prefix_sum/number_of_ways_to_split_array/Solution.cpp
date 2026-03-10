#include "Solution.hpp"

int Solution::waysToSplit(const std::vector<int>& nums) {
    int numberWays = 0;
    size_t size = nums.size();
    std::vector<int> prefix = {nums.at(0)};

    for(ssize_t i = 1; i < size; ++i) {
        prefix.push_back(nums.at(i) + prefix.back());
    }

    for(ssize_t i = 0; i < size - 1; ++i) {
        int left    = prefix.at(i);
        int right   = prefix.back() - prefix.at(i);
        if(left >= right) {
            ++numberWays;
        } 
    }
    
    return (numberWays);
}