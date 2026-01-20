#include "Solution.hpp"

int main(void) {
    std::string str = "loonbalxballpoon";

    Solution s;
    std::cout << "number of baloons : " << s.maxNumberOfBalloons(str) << "\n";

    return (EXIT_SUCCESS);
}