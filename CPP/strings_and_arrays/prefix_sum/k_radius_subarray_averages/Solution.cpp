#include "Solution.hpp"

std::vector<int> Solution::getAverages(std::vector<int>& nums, int k) {
    int n = nums.size();
    int64_t runningTotal = 0;
    int windowSize = 2 * k + 1; 

    std::vector<int64_t> prefix;
    std::vector<int> result;

    if(k == 0) {
        return (nums);
    }

    for(int i = 0; i < n; ++i) {
        runningTotal += nums.at(i);
        prefix.push_back(runningTotal);
    }
    
    for(int j = 0; j < n; ++j) {
        if( j - k < 0 || j + k >= n) {
            result.push_back(-1);
        } else {
            int64_t sum = prefix[j + k] - prefix[j - k] + nums[j - k];
            result.push_back(sum / windowSize);
        }
    }
    return (result);
}