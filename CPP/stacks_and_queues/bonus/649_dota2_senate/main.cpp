#include "Solution.hpp"
#include <cstdlib>
#include <iostream>
#include <string>

int main(void) {
    Solution s;
    
    std::string str = "RDDDR";
    std::cout << "winner : " << s.predictPartyVictory(str) << "\n";

    return EXIT_SUCCESS;
}
