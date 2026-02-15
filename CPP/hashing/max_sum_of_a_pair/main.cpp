#include "Solution.hpp"

int main(void) {
    std::vector<int> nums = {18,43,36,13,7};

    Solution s;

    int result = s.maximumSum(nums);
    
    std::cout << "result : " << result << "\n"; 
    return (EXIT_SUCCESS);
}