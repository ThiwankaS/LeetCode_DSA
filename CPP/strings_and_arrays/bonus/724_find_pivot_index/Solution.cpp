#include "Solution.hpp"

int Solution::pivotIndex(const std::vector<int>& nums) {
    
    if(nums.empty()){
        return (-1);
    }

    int size = nums.size();
    // we need to keep one additional spaces to handle left most edge case
    std::vector<int> prefixSum(size + 1, 0);
    
    for(int i = 0; i < size; i++) {
        prefixSum[i + 1] = nums[i] + prefixSum[i]; 
    }
    
    int left = 1;
    while(left <= size) {
        if(prefixSum[left - 1] == (prefixSum[size] - prefixSum[left])) {
            return (left - 1);
        }
        left++;
    }
    return (-1);
}
