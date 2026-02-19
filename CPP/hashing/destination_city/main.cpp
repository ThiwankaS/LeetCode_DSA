#include "Solution.hpp"
#include <cstdlib>

int main(void) {
    Solution s;
    std::vector<std::vector<std::string>> paths = {{"London","New York"},{"New York","Lima"},{"Lima","Sao Paulo"}};
    std::cout << " the city without any path outgoing to another city : " << s.destCity(paths) <<"\n";
    return (EXIT_SUCCESS);
}
