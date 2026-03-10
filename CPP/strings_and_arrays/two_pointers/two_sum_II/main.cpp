#include "Solution.hpp"

int main (void) {
    std::vector<int> nums = {2,7,11,15};
    int target = 9;

    Solution s;
    
    std::vector<int> result =  s.twoSum(nums, target);
    s.printArray(result);

    return (EXIT_SUCCESS);
}