#include "Solution.hpp"

int Solution::largestSum(const std::vector<int>& nums, int k) {
    int running_total = 0, right;

    for(right = 0; right < k; ++right) {
        running_total += nums.at(right);
    }

    int largest = running_total;

    for(;right < nums.size(); ++right) {
        running_total += nums.at(right) - nums.at(right - k);
        largest = std::max(largest, running_total);
    }

    return (largest);
}