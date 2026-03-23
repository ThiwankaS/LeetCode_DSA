#include "Solution.hpp"
#include <cstdint>
#include <unordered_map>
#include <string>

std::string Solution::customeSortString(const std::string& order, const std::string& s) {
    int16_t char_map[26] = { 0 };

    for(unsigned char ch : s) {
        char_map[static_cast<int16_t>(ch) - 'a']++;
    }
 
    std::string result = "";
    for(unsigned char ch : order) {
        int16_t value = static_cast<int16_t>(ch) - 'a';
        if(char_map[value] != 0) {
            result.append(char_map[value], ch);
            char_map[value] = 0;
        }
    }

    for(int i = 0; i < 26; i++){
        if(char_map[i] != 0) {
            result.append(char_map[i], static_cast<unsigned char>(i + 'a'));
        }
    }
    return (result);
}

/**
  * below solution is working and pass all tests
*/
// std::string Solution::customeSortString(const std::string& order, const std::string& s) {
//     std::unordered_map<unsigned char, int> char_map = {};
//
//     for(unsigned char ch : s){
//         char_map[ch]++;
//     }
//
//     std::string result;
//
//     for(unsigned char c : order) {
//         if(char_map.contains(c)) {
//             result.append(char_map[c],c);
//             char_map.erase(c);
//         }
//     }
//
//     for(const auto& [key, value] : char_map) {
//         result.append(value, key);
//     }
//
//     return (result);
//}
