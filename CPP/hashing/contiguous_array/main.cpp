#include "Solution.hpp"

int main(void) {
    std::vector<int> nums = { 0, 1, 1, 1, 1, 1, 0, 0, 0 };
    //std::vector<int> nums = { 0, 1, 0, 1, 1, 1 };
    Solution s;
    
    std::cout << "Longest contigiouos array : " << s.findMaxLength(nums) << "\n";

    return (EXIT_SUCCESS);
}