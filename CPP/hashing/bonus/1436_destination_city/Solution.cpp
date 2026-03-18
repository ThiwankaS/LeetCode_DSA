#include "Solution.hpp"

#include <string>
#include <set>
#include <vector>
#include <algorithm>
#include <ranges>

std::string Solution::destCity(std::vector<std::vector<std::string>>& paths) {
    std::set<std::string> embark = {};

    for(auto& pair : paths) {
        embark.insert(pair[0]);
    }

    auto dest_view = paths 
        | std::views::transform([](const auto& pair){ return pair[1]; })
        | std::views::filter([&](const auto& city){
            return (!embark.contains(city));
    });

    return (*dest_view.begin());
}

/**
  * below solution is also valid but required more memory and slow
*/
// std::string Solution::destCity(std::vector<std::vector<std::string>>& path) {
//     std::set<std::string> embark = {};
//     std::set<std::string> destination = {};
//
//     for(auto& pair : paths) {
//         embark.insert(pair[0]);
//         destination.insert(pair[1]);
//     }
//
//     std::vector<std::string> diff = {};
//     std::ranges::set_difference(destination, embark, std::back_inserter(diff));
//
//     if(diff.empty()) {
//         return ("");
//     }
//     return (*diff.begin());
// }
