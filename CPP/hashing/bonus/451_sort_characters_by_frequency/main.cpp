#include "Solution.hpp"
#include <cstdlib>
#include <iostream>

int main(void) {
    Solution s;
    std::string str = "tree";
    std::cout << "result : " << s.frequencySort(str) << "\n";
    return (EXIT_SUCCESS);
}
