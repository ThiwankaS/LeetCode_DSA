#include "Solution.hpp"

std::vector<int> Solution::sortedSquares(std::vector<int>& nums) {
    size_t size = nums.size();
    std::vector<int> result;
    size_t left = 0, right = size - 1;

    result.resize(size);
    for(ssize_t i = size - 1; i >= 0; --i) {
        int sqaure;
        if(std::abs(nums.at(left)) < std::abs(nums.at(right))){
            sqaure = nums.at(right);
            --right;
        } else {
            sqaure = nums.at(left);
            ++left;
        }
        result[i] = sqaure * sqaure;
    }
    return (result);
}

void Solution::printArray(const std::vector<int>& nums) {
    std::cout << "[";
    for(auto it : nums) {
        std::cout << it << ", ";
    }
    std::cout << "]\n";
}