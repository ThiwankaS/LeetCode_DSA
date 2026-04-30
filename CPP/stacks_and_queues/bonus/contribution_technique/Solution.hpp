#pragma once
#include <vector>
#include <ranges>
#include <iostream>
#include <string>

template<typename Container>
requires std::ranges::range<Container>
void printData(const std::string& msg, const Container& container) {
    std::cout << msg << "[ ";

    for(auto value : container) {
        std::cout << value << " ";
    }

    std::cout << "]\n";
}

class Solution {
    public:
        long long sumOfSubbarrays(const std::vector<int>& arr);
};
