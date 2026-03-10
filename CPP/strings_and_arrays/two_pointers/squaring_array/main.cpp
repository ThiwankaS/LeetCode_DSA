#include "Solution.hpp"

int main(void) {
    std::vector<int> nums = { 
        -49, -48, -45, -41, -36, -32, -29, -27, -22, -19, 
        -16, -13, -11, -9, -4, -3, 1, 6, 8, 10, 
        15, 18, 23, 29, 35, 39, 44, 48, 51, 56, 
        63, 67, 70, 78, 81, 85, 90, 94, 99, 102, 
        106, 111, 115, 122, 125, 129, 134, 139, 142, 147 
    };

    Solution s;
    s.printArray(nums);
    for(int i = 0; i < 5000000; i++) {
        volatile std::vector<int> result = s.sortedSquares(nums);
    }
    return (EXIT_SUCCESS);
}