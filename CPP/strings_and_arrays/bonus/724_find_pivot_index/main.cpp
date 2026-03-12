#include "Solution.hpp"
#include <cstdlib>
#include <iostream>

int main(void) {
    //std::vector <int> nums = { 1, 7, 3, 6, 5, 6}; 
    std::vector <int> nums = { 1, -1, 2};
    Solution s;
    int result = s.pivotIndex(nums);
    std::cout << "Answere is : " << result << "\n";
    return (EXIT_SUCCESS);
}
