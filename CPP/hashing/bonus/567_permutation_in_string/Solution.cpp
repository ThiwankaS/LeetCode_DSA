#include "Solution.hpp"
#include <cstddef>
#include <cstdint>
#include <string>
#include <unordered_map>

bool Solution::checkInclusion(std::string& s1, std::string& s2) {

    int16_t char_map[26] = {0};

    auto isEqual = [](int16_t* a){
        for(size_t j = 0; j < 26; j++){
            if(a[j] != 0){
                return (false);
            }
        }
        return (true);
    };

    size_t n1 = s1.length();
    size_t n2 = s2.length();

    if(n1 > n2) {
        return (false);
    }

    for(size_t i = 0; i < n1; i++) {
        char_map[static_cast<int16_t>(s1[i] - 'a')]++;
        char_map[static_cast<int16_t>(s2[i] - 'a')]--;
    }

    if(isEqual(char_map)) {
        return (true);
    }

    size_t left = 0;
    size_t right = n1;

    while(right < n2) {
        char_map[static_cast<int16_t>(s2[left] - 'a')]++;
        left++;

        char_map[static_cast<int16_t>(s2[right] - 'a')]--;
        right++;

        if(isEqual(char_map)) {
            return (true);
        }
    }
    return (false);
}

/**
  * below solution use two arrays and slightly lower sized data type to optimized for memory usage
*/

// bool Solution::checkInclusion(std::string& s1, std::string& s2) {
//
//     uint16_t map_s1[26] = {0};
//     uint16_t map_s2[26] = {0};
//
//     auto isEqual = [](uint16_t* a1, uint16_t* a2){
//         for(size_t j = 0; j < 26; j++){
//             if(a1[j] != a2[j]){
//                 return (false);
//             }
//         }
//         return (true);
//     };
//
//     size_t n1 = s1.length();
//     size_t n2 = s2.length();
//
//     if(n1 > n2) {
//         return (false);
//     }
//
//     for(size_t i = 0; i < n1; i++) {
//         map_s1[s1[i] - 'a']++;
//         map_s2[s2[i] - 'a']++;
//     }
//
//     if(isEqual(map_s1, map_s2)) {
//         return (true);
//     }
//
//     size_t left = 0;
//     size_t right = n1;
//
//     while(right < n2) {
//         map_s2[s2[left] - 'a']--;
//         left++;
//
//         map_s2[s2[right] - 'a']++;
//         right++;
//
//         if(isEqual(map_s1, map_s2)) {
//             return (true);
//         }
//     }
//     return (false);
// }


/**
  * while below code is more modern and idiomatic, it is still slow
*/
// bool Solution::checkInclusion(std::string& s1, std::string& s2) {
//
//     auto map_build = []<typename Iter>(const Iter& begin, const Iter& end) {    
//         std::unordered_map<unsigned char, int> char_map = {};
//         for(Iter it = begin; it != end; it++) {
//             char_map[*it]++;
//         }
//         return (char_map);
//     };
//  
//     int window_size = static_cast<int>(s1.size());
//     int lenght = static_cast<int>(s2.length());
//
//     if(window_size > lenght) {
//         return (false);
//     }
//
//     int right = window_size;
//     int left  = 0;
//     
//     auto map_s1 = map_build(s1.begin(), s1.end());
//     auto map_s2 = map_build(s2.begin(), s2.begin() + right);
//
//     if(map_s1 == map_s2) {
//         return (true);
//     }
//
//     while(right < lenght) {
//         
//         unsigned char char_to_remove = s2[left];
//         map_s2[char_to_remove]--;
//         if(map_s2[char_to_remove] == 0) {
//             map_s2.erase(char_to_remove);
//         }
//         left++;
//
//         unsigned char char_to_add = s2[right];
//         map_s2[char_to_add]++;
//         right++;
//
//         if(map_s1 == map_s2) {
//             return (true);
//         }
//     }
//     return (false);
// }
