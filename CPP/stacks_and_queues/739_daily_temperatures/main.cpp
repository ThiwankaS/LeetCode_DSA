#include "Solution.hpp"
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

void printArray(const std::string& msg, const std::vector<int>& array) {
    std::cout << msg << "{ ";

    for(auto value : array) {
        std::cout << value << ", ";
    }
    std::cout << "}\n";
}

int main(void) {
    std::vector<int> temperatures = { 73,74,75,71,69,72,76,73 };
    Solution s;
    auto result = s.dailyTemperatures(temperatures);
    printArray("original : ", temperatures);
    printArray("result : ", result);
    return EXIT_SUCCESS;
}
