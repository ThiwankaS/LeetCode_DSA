#pragma once
#include <vector>
#include <string>
#include <ranges>
#include <iostream>

template<typename Container>
requires std::ranges::range<Container>
void printData(const Container& arr, const std::string& msg) {
    
    std::cout << msg << ": [ ";
    
    for(auto value : arr) {
        std::cout << value << " ";
    }

    std::cout <<  "] \n";
}

class Solution {
    public:
        std::vector<int> asteroidCollision(const std::vector<int> asteroids);
};
