#include "Solution.hpp"
#include <algorithm>

int Solution::minSubArrayLen(int target, std::vector<int>& nums) {

    if(nums.empty()) { return (0); }

    int size = nums.size();
    int left = 0, runningTotal = 0;
    int minLenght = 1000000;

    for(int right = 0; right < size; right++) {
        runningTotal += nums[right];
        
        while(runningTotal >= target) {
            minLenght = std::min(minLenght, right - left + 1);
            runningTotal -= nums[left];
            left++;
        }
    }

    return (minLenght >= 1000000 ? 0 : minLenght);
}
