#include "Solution.hpp"

int main(void) {
    std::vector<int> nums = { 3, 0, 1};
    
    Solution s;
    
    std::cout << "missing number : " << s.missingNumber(nums) << "\n";

    return (EXIT_SUCCESS);
}