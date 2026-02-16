#include "Solution.hpp"
#include <cstdlib>

int main(void) {
    std::string jewels = "aA";
    std::string stones = "aAAbbbb";

    Solution s;
    std::cout << "Result : " << s.numJewelsInStones(jewels,stones) << "\n";
    return (EXIT_SUCCESS);
}
