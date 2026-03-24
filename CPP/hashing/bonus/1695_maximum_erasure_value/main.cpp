#include "Solution.hpp"
#include <cstdlib>
#include <vector>
#include <iostream>

int main(void) {
    Solution s;
    //std::vector<int> nums = {5,2,1,2,5,2,1,2,5};
    std::vector<int> nums = {187,470,25,436,538,809,441,167,477,110,275,133,666,345,411,459,490,266,987,965,429,166,809,340,467,318,125,165,809,610,31,585,970,306,42,189,169,743,78,810,70,382,367,490,787,670,476,278,775,673,299,19,893,817,971,458,409,886,434};
    int result = s.maximumUniqueSubarray(nums);
    std::cout << "result : " << result << "\n";
    return (EXIT_SUCCESS);
}
