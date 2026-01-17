#include "Solution.hpp"

int main(void) {
    std::vector<int> nums = { 1,2,3 };
    int k = 3;

    Solution s;

    std::cout << "no of subarrays : " << s.subarraySum(nums, k) << "\n"; 
    return (EXIT_SUCCESS);
}