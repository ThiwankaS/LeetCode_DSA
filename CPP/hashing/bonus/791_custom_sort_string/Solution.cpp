#include "Solution.hpp"
#include <unordered_map>
#include <string>

std::string Solution::customeSortString(const std::string& order, const std::string& s) {
    std::unordered_map<unsigned char, int> char_map = {};

    for(unsigned char ch : s){
        char_map[ch]++;
    }

    std::string result;

    for(unsigned char c : order) {
        if(char_map.contains(c)) {
            result.append(char_map[c],c);
            char_map.erase(c);
        }
    }

    for(const auto& [key, value] : char_map) {
        result.append(value, key);
    }

    return (result);
}
