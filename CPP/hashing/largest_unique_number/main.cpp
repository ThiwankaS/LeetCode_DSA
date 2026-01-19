#include "Solution.hpp"

int main(void) {

    std::vector<int> nums = { 5,7,3,9,4,9,8,3,1 };

    Solution s;
    std::cout << "Largest unige number : " << s.largestUniqueNumber(nums) << "\n";
    return (EXIT_SUCCESS);
}