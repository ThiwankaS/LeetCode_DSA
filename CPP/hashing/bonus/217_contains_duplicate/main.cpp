#include "Solution.hpp"
#include <cstdlib>
#include <vector>
#include <iostream>

int main(void) {
    std::vector<int> nums = { 1, 2, 3, 1 };
    Solution s;
    if(s.containsDuplicate(nums)) {
        std::cout << "conatins duplicates !\n";
    } else {
        std::cout << "not contains duplicates!\n";
    }
    return (EXIT_SUCCESS);
}
