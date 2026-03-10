#include "Solution.hpp"
#include <cstdlib>
#include <vector>

int main(void) {
    std::vector<int> nums = {0, 1, 0, 3, 12};
    
    Solution s;
    s.moveZeros(nums);

    std::vector<int> nums2 = {0};
    s.moveZeros(nums2);

    std::vector<int> nums3 = {1, 2, 3, 0, 4, 5, 6, 0};
    s.moveZeros(nums3);

    return (EXIT_SUCCESS);
}
