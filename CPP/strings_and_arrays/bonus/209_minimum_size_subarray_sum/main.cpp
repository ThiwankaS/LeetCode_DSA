#include "Solution.hpp"
#include <cstdlib>
#include <iostream>

int main(void) {
    std::vector<int> nums = { 1, 2, 3, 4, 5 };
    int target = 15;
    Solution s;
    std::cout << "result : " << s.minSubArrayLen(target, nums) << "\n"; 
    return (EXIT_SUCCESS);
}
