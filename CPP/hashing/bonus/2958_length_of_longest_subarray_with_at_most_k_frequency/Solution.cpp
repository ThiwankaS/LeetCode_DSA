#include "Solution.hpp"
#include <unordered_map>
#include <algorithm>

int Solution::maxSubarrayLength(const std::vector<int>& nums, int k) {
    
    int size = static_cast<int>(nums.size());
    std::unordered_map<int, int> frequency = {};
    
    int left = 0;
    int maxElements = 0;

    for(int i = 0; i < size; i++) {     
        int element = nums[i];
        int& count = frequency[element];
        count++;
        if(count > k){
            while(nums[left] != element){
                frequency[nums[left]]--;
                left++;
            }
            count--;
            left++;
        } 
        maxElements = std::max(maxElements, (i - left + 1));
    }
    return (maxElements);
}
