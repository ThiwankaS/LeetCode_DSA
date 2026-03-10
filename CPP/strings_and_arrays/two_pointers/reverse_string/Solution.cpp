#include "Solution.hpp"

void Solution::reverseString(std::vector<char>& s) {
    size_t left = 0, right = s.size() - 1;
    
    while(left < right) {
        s[left]  = s[left] ^ s[right];
        s[right] = s[left] ^ s[right];
        s[left]  = s[left] ^ s[right];
        ++left;
        --right;
    }
}

void Solution::printArray(const std::vector<char>& s) {
    for(auto it : s) {
        std::cout << it << " ";
    }
    std::cout << "\n";
}