#include "Solution.hpp"

std::vector<int> Solution::intersection(const std::vector<std::vector<int>>& nums) {
    std::vector<int> result;
    std::unordered_map<int, int> frequecy;
    int n = nums.size();

    for(const auto& arr : nums) {
        for(const auto& it : arr) {
            if(frequecy.contains(it)) {
                frequecy[it]++;
            } else {
                frequecy[it] = 1;
            }
        }
    }

    for(const auto& [key, value] : frequecy) {
        if(value == n) {
            result.push_back(key);
        }
    }

    std::sort(result.begin(), result.end());
    
    return (result);
}