#include "Solution.hpp"

std::vector<std::vector<std::string>> Solution::groupAnagrams(std::vector<std::string>& strs) {
    std::vector<std::vector<std::string>> result;
    std::unordered_map<std::string, std::vector<std::string>> groups;
    
    for(const std::string& str : strs) {
        std::string temp(str);
        std::sort(temp.begin(), temp.end());
        groups[temp].push_back(str);
    }

    for(const auto& [key, value] : groups) {
        result.emplace_back(value);
    }

    return (result);
}