#include "Solution.hpp"
#include <cstdlib>
#include <vector>

int main(void) {
    Solution s;
    std::vector<int> asteroid = { -2, 1, 1, -1};
    auto result = s.asteroidCollision(asteroid);
    printData(result, "result ");
    return EXIT_SUCCESS;
}
