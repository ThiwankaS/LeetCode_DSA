#include "Solution.hpp"

std::vector<int> Solution::twoSum(std::vector<int>& nums, int target) {
    std::vector<int> result;

    size_t start    = 0;
    size_t end      = nums.size() - 1;

    while(start < end) {
        int v1 = nums.at(start);
        int v2 = nums.at(end);
        if(v1 + v2 == target) {
            result.push_back(start + 1);
            result.push_back(end + 1);
            return (result);
        } else if (v1 + v2 > target) {
            end--;
        } else {
            start++;
        }
    }
    return (result);
}

void Solution::printArray(std::vector<int>& nums) {
    
    std::cout << "result : [";
    for(auto it : nums) {
        std::cout << it << ", ";
    }
    std::cout << "]\n";
}