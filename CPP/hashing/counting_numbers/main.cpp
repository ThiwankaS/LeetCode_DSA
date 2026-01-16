#include "Solution.hpp"

int main(void) {
    std::vector<int> nums = { 1,2,3 };

    Solution s;

    std::cout << "element count : " << s.countElements(nums) << "\n"; 
    return (EXIT_SUCCESS);
}