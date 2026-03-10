#include "Solution.hpp"

int main (void) {
    std::vector<int> nums = {10, 4, -8, 7};
    Solution s;
    std::cout << "number of ways : " << s.waysToSplit(nums) << "\n";
    return (EXIT_SUCCESS);
}