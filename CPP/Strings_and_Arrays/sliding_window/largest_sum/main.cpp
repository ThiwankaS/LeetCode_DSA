#include "Solution.hpp"

int main(void) {
    std::vector<int> array = { 3, -1, 4, 12, -8, 5, 6 };
    int k = 4;
    Solution s;
    int large = s.largestSum(array, k);
    std::cout << "large : " << large << "\n";
    return (EXIT_SUCCESS);
}