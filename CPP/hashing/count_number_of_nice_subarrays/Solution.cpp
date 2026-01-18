#include "Solution.hpp"

int Solution::numberOfSubarrays(std::vector<int>& nums, int k) {
    int odd_count = 0, count = 0;
    std::unordered_map<int, int> history = { { 0, 1 } };

    for(const int& value : nums) {
        if(value % 2) {
            odd_count++;
        }
        count += history[odd_count - k];
        history[odd_count]++;
    }

    return (count);
}