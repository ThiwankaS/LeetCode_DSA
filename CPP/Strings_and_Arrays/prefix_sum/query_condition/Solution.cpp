#include "Solution.hpp"

std::vector<std::string> Solution::queryResult( 
    const std::vector<int>& nums, 
    const std::vector<std::pair<int, int>>& query, 
    int limit) {

        std::vector<int> prefixSum;
        std::vector<std::string> result;
        int runningTotal = 0;

        for(int value : nums) {
            runningTotal += value;
            prefixSum.emplace_back(runningTotal);
        }

        for(auto it : query) {
            int sum = prefixSum[it.second] - prefixSum[it.first] + nums[it.first];
            result.emplace_back((sum <= limit) ? "true" : "false");
        }
        
    return (result);
}