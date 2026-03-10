#include "Solution.hpp"

int main(void) {
    std::vector<int> nums = { 3, 2, 1, 3, 1, 1 };
    int k = 5;

    Solution s; 
    int lenght = s.longestSubArray(nums, k);
    std::cout << "longest length : " << lenght << "\n";
    return (EXIT_SUCCESS);
}