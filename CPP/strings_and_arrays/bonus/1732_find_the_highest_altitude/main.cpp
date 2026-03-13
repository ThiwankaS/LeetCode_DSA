#include "Solution.hpp"
#include <iostream>
#include <cstdlib>

int main(void) {
    
    std::vector<int> gain = { -5, 1, 5, 0, -7 };
    Solution s;

    std::cout << "result : " << s.largestAltitude(gain) << "\n";
    return (EXIT_SUCCESS);
} 
