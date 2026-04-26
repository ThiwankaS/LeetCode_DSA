#pragma once
#include <iostream>
#include <ranges>
#include <string>
#include <vector>

// helper function to print data
template <typename Container>
requires std::ranges::range<Container>
void printData(const Container& arr, const std::string& msg) {
    std::cout << msg << " : [ ";

    for(const auto& item : arr) {
        std::cout << item << " ";
    }
    std::cout << "]\n";
}

class Solution {
    public:
        std::vector<int> finalPrices(std::vector<int>& prices);
};
