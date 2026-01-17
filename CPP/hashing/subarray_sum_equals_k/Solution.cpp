#include "Solution.hpp"

int Solution::subarraySum(std::vector<int>& nums, int k) {
    int count = 0, prefix = 0;
    std::unordered_map<int, int> history;
    history[0] = 1;

    for(int& value : nums) {
        prefix += value;
        count += history[prefix -k];
        history[prefix]++;
    }
    return (count);
}