#include "Solution.hpp"

#include <unordered_map>
#include <ranges>
#include <vector>
#include <algorithm>

std::string Solution::frequencySort(std::string& s) {
    std::unordered_map<unsigned char, int> character_map = {};
    
    for(unsigned char ch : s){
        character_map[ch]++;
    }

    std::vector<std::pair<unsigned char, int>> values_to_sort(character_map.begin(), character_map.end());
    
    std::sort(values_to_sort.begin(), values_to_sort.end(), [](const auto& p1, const auto& p2){
        return (p1.second > p2.second);
    });

    std::string result;
    result.reserve(s.size());

    for(auto& [ch, count] : values_to_sort) {
        result.append(count, ch);
    }

    return (result);
}

/**
  * while below is modern CPP solution, this requires lot's of memory
  * under the hood this is using four loops so the time complexity is also not good 
*/
// std::string Solution::frequencySort(std::string& s) {
//     std::unordered_map<unsigned char, std::string> character_mapping = {};
//     
//     for(unsigned char ch : s){
//         character_mapping[ch] += ch;
//     }
//
//     auto values_view = character_mapping | std::views::values;
//
//     std::vector<std::string> values_to_sort(values_view.begin(), values_view.end());
//     
//     std::sort(values_to_sort.begin(), values_to_sort.end(), [](const auto& s1, const auto& s2){
//         return (s1.size() > s2.size());
//     });
//
//     std::string result = "";
//     result.reserve(s.size());
//
//     for(auto str : values_to_sort) {
//         result += str;
//     }
//
//     return (result);
// }
