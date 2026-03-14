#include "Solution.hpp"
#include <cstdlib>
#include <iostream>

int main(void) {
    std::vector<int>nums1 = { 1, 2, 3, 6 };
    std::vector<int>nums2 = { 2, 3, 4, 5 };
    Solution s;
    std::cout << "answer : " << s.getCommon(nums1, nums2) << "\n";
    return (EXIT_SUCCESS);
}
