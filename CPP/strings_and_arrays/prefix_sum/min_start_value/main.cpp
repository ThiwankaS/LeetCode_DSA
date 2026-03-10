#include "Solution.hpp"

int main(void) {
    std::vector<int> nums = { 1,-2,-3 };
    Solution s;
    int minStart = s.minStartValue(nums);

    std::cout << "minimum start value : " << minStart << "\n";

    return (EXIT_SUCCESS);
}