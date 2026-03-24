#include "Solution.hpp"
#include <algorithm>
#include <cstdint>
#include <iterator>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <ranges>
#include <vector>

bool Solution::closeStrings(const std::string& word1, const std::string& word2){
    if(word1.length() != word2.length()) {
        return (false);
    }

    int frequency1 [26] = { 0 };
    int frequency2 [26] = { 0 };

    int mask1 = 0;
    int mask2 = 0;

    for(int i = 0; i < static_cast<int>(word1.length()); i++) {
        int char1 = word1[i] - 'a';
        int char2 = word2[i] - 'a';

        frequency1[char1]++;
        frequency2[char2]++;
        
        /**
          * using a mask and bit opertaions to set bits base on the character to record
          * the existance of the character, since only need to track 26 characters can be done
          * using a int wich has 32 bits
        */
        mask1 = mask1 | (1 << char1);
        mask2 = mask2 | (1 << char2);
    }

    if(mask1 != mask2) {
        return (false);
    }

    std::sort(std::begin(frequency1), std::end(frequency1));
    std::sort(std::begin(frequency2), std::end(frequency2));

    for(int i = 0; i < 26; i++) {
        if(frequency1[i] != frequency2[i]) {
            return (false);
        }
    }
    return (true);
}

/**
  * below solution uses legacy approch but still requre much more memory
*/
// bool Solution::closeStrings(const std::string& word1, const std::string& word2){
//     if(word1.length() != word2.length()) {
//         return (false);
//     }
//
//     int16_t frequency1 [26] = { 0 };
//     int16_t frequency2 [26] = { 0 };
//
//     int8_t exists1 [26] = { 0 };
//     int8_t exists2 [26] = { 0 };
//
//     for(int i = 0; i < static_cast<int>(word1.length()); i++) {
//         frequency1[word1[i] - 'a']++;
//         exists1[word1[i] - 'a'] = 1;
//         
//         frequency2[word2[i] - 'a']++;
//         exists2[word2[i] - 'a'] = 1;
//     }
//
//     std::sort(std::begin(frequency1), std::end(frequency1));
//     std::sort(std::begin(frequency2), std::end(frequency2));
//
//     for(int i = 0; i < 26; i++) {
//         if((frequency1[i] != frequency2[i]) || (exists1[i] != exists2[i])) {
//             return (false);
//         }
//     }
//     return (true);
//}

/**
  * below is a modern more idomatic solution for this problem, but still slow and memory savvy
*/
// bool Solution::closeStrings(const std::string& word1, const std::string& word2){
//     int n1 = static_cast<int>(word1.length());
//     int n2 = static_cast<int>(word2.length());
//     
//     if( n1 != n2) {
//         return (false);
//     }
//
//     std::unordered_map<unsigned char, int> char_map1;   
//     std::unordered_map<unsigned char, int> char_map2;
//
//     for(int i = 0; i < n1; i++) {
//         char_map1[word1[i]]++;
//         char_map2[word2[i]]++;
//     }
//  
//     auto key_view1 = char_map1 | std::views::keys;
//     auto key_view2 = char_map2 | std::views::keys;
//  
//     if(key_view1.size() != key_view2.size()) {
//       return (false);
//     } 
//  
//     std::unordered_set<unsigned char> key_set1 (key_view1.begin(), key_view1.end());
//     std::unordered_set<unsigned char> key_set2 (key_view2.begin(), key_view2.end());
//     
//     if(key_set1 != key_set2) {
//         return (false);
//     }
//
//     auto sorted_values = [](auto& map){
//         auto value_view = map | std::views::values;
//         std::vector<int> values (value_view.begin(), value_view.end());
//         std::ranges::sort(values);
//         return (values);
//     };
//
//     return (sorted_values(char_map1) == sorted_values(char_map2));
// }
