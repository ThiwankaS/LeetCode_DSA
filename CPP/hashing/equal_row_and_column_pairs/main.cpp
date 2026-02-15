#include "Solution.hpp"
#include <vector>
#include <iostream>

int main(void) {

    std::vector<std::vector<int>>grid = {{ 3,1,2,2 },{ 1,4,4,5 },{ 2,4,2,2 },{ 2,4,2,2 }};
    Solution s;
    std::cout << "Result : " << s.equalPairs(grid) << "\n";

    return (EXIT_SUCCESS);
}
