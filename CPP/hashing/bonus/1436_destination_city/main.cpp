#include "Solution.hpp"
#include <cstdlib>
#include <iostream>
#include <vector>

int main(void) {
    std::vector<std::vector<std::string>> path = { 
        {"London","New York"},
        {"New York","Lima"},
        {"Lima","Sao Paulo"}
    };
    Solution s;
    std::cout << "result : " << s.destCity(path) << "\n";
    return (EXIT_SUCCESS);
}
