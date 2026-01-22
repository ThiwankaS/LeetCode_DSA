#include "Solution.hpp"

int main(void) {
    std::vector<int> cards = { 3,4,2,3,4,7 }; 
    Solution s;
    std::cout << "minimum number of consecutive cards : " << s.minimumCardPickup(cards) << "\n";
    return (EXIT_SUCCESS);
}