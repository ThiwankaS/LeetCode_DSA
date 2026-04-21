#include "Solution.hpp"
#include <vector>
#include <iostream>
#include <cstdlib>

int main(void) {
    std::vector<int> nums = { 8,2,4,7 };
    Solution s;
    int lenght = s.longestSubarray(nums, 4);
    std::cout << "length : " << lenght << "\n";
    return EXIT_SUCCESS;
}
