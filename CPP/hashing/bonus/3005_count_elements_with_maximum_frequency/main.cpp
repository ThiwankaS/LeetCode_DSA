#include "Solution.hpp"
#include <cstdlib>
#include <iostream>

int main (void) {
    Solution s;
    std::vector<int> nums = { 1,2,2,3,1,4 };
    std::cout << "result : " << s.maxFrequencyElements(nums) << "\n";
    return (EXIT_SUCCESS);
}
