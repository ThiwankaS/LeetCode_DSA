#include "Solution.hpp"
#include <cstdlib>
#include <iostream>

int main(void){
    Solution s;
    std::vector<int> nums = { 1, 2, 3, 1, 1};
    int result = s.identicalPairs(nums);
    std::cout << "result : " << result << "\n";
    return (EXIT_SUCCESS);
}
