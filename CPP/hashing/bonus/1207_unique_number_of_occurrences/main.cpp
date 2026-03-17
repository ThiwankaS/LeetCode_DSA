#include "Solution.hpp"
#include <cstdlib>
#include <iostream>

int main(void) {
    std::vector<int> arr = { 1, 2, 2, 1, 1, 3 };
    Solution s;
    
    if(s.uniqueOccurences(arr)) {
        std::cout << "number of occurrences of each value in the array is unique!\n";
    } else { 
        std::cout << "number of occurrences of each value in the array is  not unique!\n";
    }
    return (EXIT_SUCCESS);
}
