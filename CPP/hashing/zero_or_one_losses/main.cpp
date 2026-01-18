#include "Solution.hpp"

template <typename T>
void printContainer(const T& container) {
    std::cout << "{";
    for(const auto& value : container) {
        std::cout << value << ", ";
    }
    std::cout << "} \n";
}


int main(void) {
    std::vector<std::vector<int>> matches = { 
        { 1, 3 },
        { 2, 3 },
        { 3, 6 },
        { 5, 6 },
        { 5, 7 },
        { 4, 5 },
        { 4, 8 },
        { 4, 9 },
        {10, 4 },
        {10, 9 } 
    };

    Solution s;

    std::vector<std::vector<int>> result = s.findWinners(matches);

    std::cout << "{ \n";
    for(const auto& item : result) {
        printContainer(item);
    }
    std::cout << " }\n";

    return (EXIT_SUCCESS);
}