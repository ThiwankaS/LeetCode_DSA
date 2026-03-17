#include "Solution.hpp"

#include <unordered_map>
#include <algorithm>
#include <ranges>

int Solution::findLucky(std::vector<int>& arr) {
    std::unordered_map<int, int> frequncy_map = {};
    int lucky_no = - 1;

    for(int value : arr) {
            frequncy_map[value]++;
    }

    auto lucky_no_list = frequncy_map
                            | std::views::filter([](const auto& pair){ return pair.first == pair.second; })
                            | std::views::values;
    
    auto it = std::max_element(lucky_no_list.begin(), lucky_no_list.end());
    
    if(it != lucky_no_list.end()) {
        lucky_no = *it;
    }

    return (lucky_no);
}

/**
  * legacy way of solving the problem
*/
// int Solution::findLucky(vector<int>& arr) {
//         std::unordered_map<int, int> frequncy_map = {};
//         int lucky_no = - 1;
//
//         for(int value : arr) {
//             if(frequncy_map.contains(value)) {
//                 frequncy_map[value]++;
//             } else {
//                 frequncy_map[value] = 1;
//             }
//         }
//
//         for(auto& [key, value] : frequncy_map) {
//             if(key == value) {
//                 lucky_no = std::max(lucky_no, value);
//             }
//         }
//         return (lucky_no);
//     }
// }

