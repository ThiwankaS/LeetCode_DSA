#include "Solution.hpp"

int Solution::longestSubArray(const std::vector<int>& nums , int k) {
    int lenght = 0;
    int left = 0;
    int running_total = 0;

    for(int right = 0; right < nums.size(); ++right) {
        running_total += nums.at(right);
        while(running_total > k) {
            running_total -= nums.at(left);
            ++left;
        }
        lenght = std::max(lenght, right - left + 1);
    }
    return (lenght);
}