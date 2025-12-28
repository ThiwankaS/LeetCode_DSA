#include "Solution.hpp"

int main (void) {
    std::vector<int> nums = {3,2,4};
    int target = 6;

    Solution s;
    
    std::vector<int> result =  s.twoSum(nums, target);
    s.printArray(result);

    return (EXIT_SUCCESS);
}