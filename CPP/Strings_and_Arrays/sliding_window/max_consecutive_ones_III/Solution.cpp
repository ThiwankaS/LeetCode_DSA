#include "Solution.hpp"

int Solution::longestOnes(std::vector<int>& nums, int k) {
    int lenght = 0, zero_count = 0, left = 0;

    for(int i = 0; i < nums.size(); ++i) {
        if(nums.at(i) == 0) {
            ++zero_count;
        }
        while(zero_count > k) {
            if(nums.at(left) == 0) {
                --zero_count;
            }
            ++left;
        }
        lenght = std::max(lenght, i - left + 1);
    }
    return (lenght);
}