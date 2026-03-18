#include "Solution.hpp"
#include <iostream>
#include <cstdlib>

int main(void) {
    Solution s;
    std::string path = "NESWW";
    if(s.isPathCrossing(path)) {
        std::cout << "the path crosses itself !\n";
    } else {
        std::cout << "the path dose not crosses itself !\n";
    }
    return (EXIT_SUCCESS);
}
