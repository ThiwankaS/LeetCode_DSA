#include "Solution.hpp"
#include <cstdlib>
#include <vector>
#include <iostream>

int main(void){
    Solution s;
    std::vector<int> arr = { 2, 2, 3, 4 };

    std::cout << "result : " << s.findLucky(arr) << "\n";

    return (EXIT_SUCCESS);
}
