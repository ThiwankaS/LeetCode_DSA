#pragma once
#include <iostream>
#include <ranges>
#include <string>
#include <vector>

template<typename Container>
requires std::ranges::range<Container>
void printData(const Container& container, const std::string& msg) {
    std::cout << msg << " : [ ";
    for(auto value : container) {
        std::cout << value << " ";
    }
    std::cout << "]\n";
}

class Solution {
    public:
        int sumSubarraysMins(const std::vector<int>& arr);
};
