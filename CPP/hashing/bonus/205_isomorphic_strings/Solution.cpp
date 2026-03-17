#include "Solution.hpp"
#include <unordered_map>

bool Solution::isIsomorphic(std::string& s, std::string& t) {
    int lenght = s.length();
    
    std::unordered_map<unsigned char, int> seen_s {};
    std::unordered_map<unsigned char, int> seen_t {};

    for(int i = 0; i < lenght; i++) {
        unsigned char char_s = static_cast<unsigned char>(s[i]);
        unsigned char char_t = static_cast<unsigned char>(t[i]);

        if(seen_s[char_s] != seen_t[char_t]) {
            return (false);
        }
        seen_s[char_s] = i + 1;
        seen_t[char_t] = i + 1;
    }
    return (true);
}

/**
  * legacy way of solving the problem
*/

// bool Solution::isIsomorphic(std::string& s, std::string& t) {
//     int lenght = s.length();
//
//     int index_seen_at_s [256] = { 0 }; 
//     int index_seen_at_t [256] = { 0 };
//
//     for(int i = 0; i < lenght; i++) {
//         unsigned char char_s = s[i];
//         unsigned char char_t = t[i];
//
//         if(index_seen_at_s[char_s] != index_seen_at_t[char_t]) {
//             return (false);
//         }
//
//         index_seen_at_s[char_s] = i + 1;
//         index_seen_at_t[char_t] = i + 1;
//     }
//     return (true);
//}
