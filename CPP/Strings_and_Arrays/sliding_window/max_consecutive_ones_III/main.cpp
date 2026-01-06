#include "Solution.hpp"

int main(void) {
    std::vector<int> nums = { 1,1,1,0,0,0,1,1,1,1,0 };
    int k = 2;

    Solution s;
    int result = s.longestOnes(nums, k);
    std::cout << "longest : " << result << "\n";
    return (EXIT_SUCCESS);
}