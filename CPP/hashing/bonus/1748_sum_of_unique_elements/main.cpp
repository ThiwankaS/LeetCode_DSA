#include "Solution.hpp"
#include <cstdlib>
#include <vector>
#include <iostream>

int main(void) {
    Solution s;
    std::vector<int> nums = { 1, 2, 3, 2 };
    std::cout << "result : " << s.sumOfUnique(nums) << "\n";
    return (EXIT_SUCCESS);
}
