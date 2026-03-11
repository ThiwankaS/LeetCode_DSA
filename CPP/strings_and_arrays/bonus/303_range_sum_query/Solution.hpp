#pragma once

#include <vector>
class NumArray {
    private:
        std::vector<int> prefixSum;
    public:
        NumArray(std::vector<int>& nums) {
            // get the size of the nums array
            int size = nums.size();
            // resize the prfix array to fit size + 1 elements and intialized to zero
            prefixSum.resize(size + 1, 0);
            // calculating the prefixSum for nums
            for(int i = 0; i < size; i++){
                prefixSum[i + 1] = prefixSum[i] + nums[i]; 
            }
        }

        int sumRange(int left, int right) {
            int size = prefixSum.size();
            // boundry check for indexs for both keft and right
            if(left > size || right + 1 > size)
                return (0);
            // returning the prefix sum which includes the right index
            return prefixSum[right + 1] - prefixSum[left];
        }
};
