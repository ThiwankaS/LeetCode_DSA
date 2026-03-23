#include "Solution.hpp"
#include <cstdlib>
#include <iostream>

int main(void) {
    std::vector<int> nums = { 1,0,1,0,1};
    Solution s;
    std::cout << "result : " << s.numSubarraysWithSum(nums, 2) << "\n";
    return (EXIT_SUCCESS);
}
