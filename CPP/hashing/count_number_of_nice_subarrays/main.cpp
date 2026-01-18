#include "Solution.hpp"

int main(void) {
    std::vector<int> nums = { 1, 1, 2, 1, 1 };
    int k = 3;

    Solution s;
    std::cout << "number of subarrays : " << s.numberOfSubarrays(nums, k) << "\n";

    return (EXIT_SUCCESS);
}