#include "Solution.hpp"

int main (void) {
    std::vector<int> nums = {1,12,-5,-6,50,3};
    int k = 4;

    Solution s;
    double max = s.findMaxAverage(nums, k);
    std::cout
        << std::fixed << std::setprecision(5) 
        << "max value : " << max << "\n";

    return (EXIT_SUCCESS);
}