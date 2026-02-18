#include "Solution.hpp"
#include <cstdlib>

int main(void) {
    Solution s;

    std::vector<int> num = {1,2,3,1};

    if(s.containsDuplicate(num)) {
        std::cout << "Array contains some duplicate values, so it's true !\n";
    } else {
        std::cout << "Array dose not contain any duplicate values, so it's false !\n";
    }

    return (EXIT_SUCCESS);
}
