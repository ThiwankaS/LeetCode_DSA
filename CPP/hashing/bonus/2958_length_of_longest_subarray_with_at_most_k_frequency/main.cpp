#include "Solution.hpp"
#include <cstdlib>
#include <vector>
#include <iostream>

int main(void) {
    Solution s;
    std::vector<int> nums = {1,2,2,1,3};
    int k = 1;
    int result = s.maxSubarrayLength(nums, k);
    std::cout << "result : " << result << "\n";
    return (EXIT_SUCCESS);
}
