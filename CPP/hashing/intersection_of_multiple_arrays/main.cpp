#include "Solution.hpp"

template <typename T>
void printContainer(const T& container) {
    std::cout << "{ ";
    for(auto item : container) {
        std::cout << item << ", ";
    }
    std::cout << " }\n";
}

int main(void) {
    std::vector <std::vector <int>> nums = { { 3,1,2,4,5 }, { 1,2,3,4 }, { 3,4,5,6 } };
    
    Solution s;

    std::cout << "result : "; printContainer(s.intersection(nums)); 
    return (EXIT_SUCCESS);
}