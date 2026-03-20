#include "Solution.hpp"
#include <vector>
#include <unordered_map>
#include <ranges>
#include <algorithm>

int Solution::maxFrequencyElements(std::vector<int>& nums){
    std::unordered_map<int, int> frequency_map = { };
    int max_frequency_value = 0, element_count = 0;

    for(int value : nums) {

        int current_frequncy = ++frequency_map[value];

        if(current_frequncy > max_frequency_value) {
            max_frequency_value = current_frequncy;
            element_count = current_frequncy;
        } else if (current_frequncy == max_frequency_value) {
            element_count += current_frequncy;
        }
    }
    return (element_count);
}
/**
 * while below solution is modern and idiomatic, still slow and memory savvy
*/
// int Solution::maxFrequencyElements(std::vector<int>& nums){
//     std::unordered_map<int, int> frequency_map = { };
//
//     for(int value : nums) {
//         frequency_map[value]++;
//     }
//
//     auto max_frequency_pos = std::ranges::max_element( frequency_map | std::views::values);
//     
//     int max_frequency_value = *max_frequency_pos;
//     int element_count = std::ranges::count( frequency_map | std::views::values , max_frequency_value);
//
//     return (max_frequency_value * element_count);
// }
