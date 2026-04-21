#include "Solution.hpp"
#include <cstdlib>
#include <vector>

int main(void) {
    std::vector<int> nums = { 1,3,-1,-3,5,3,6,7 };
    Solution s;
    printWindow(nums.begin(), nums.end());
    std::vector<int> result = s.maxSlidingWindow(nums, 3);
    printWindow(result.begin(), result.end());
    return EXIT_SUCCESS;
}
