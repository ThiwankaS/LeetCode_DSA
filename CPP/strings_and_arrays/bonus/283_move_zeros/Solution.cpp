#include "Solution.hpp"
#include <algorithm>
#include <vector>
#include <iostream>

void printArray(const std::vector<int>& nums){
    std::cout << "{ ";
    for(auto value : nums) {
        std::cout << value << ", ";
    }
    std::cout << "}\n";
}

void Solution::moveZeros(std::vector<int>& nums) {
    int size = nums.size();
    int left = 0;

    for(int right = 0; right < size; right++) {
        if(nums[right] != 0) {
            std::swap(nums[left], nums[right]);
            left++;
        }
    }
    printArray(nums);
}
