#include "Solution.hpp"

bool Solution::areOccurrencesEqual(const std::string& s) {
    std::unordered_map<unsigned char, int> frequency_table;
    std::set<int> frequency;

    for(size_t i = 0; i < s.size(); ++i) {
        unsigned char c = s[i];
        
        if(frequency_table.contains(c)){
            frequency_table[c]++;
        } else {
            frequency_table[c] = 1;
        }
    }

    for(const auto& [key, value] : frequency_table) {
        frequency.insert(value);
    }
    
    return (frequency.size() == 1);
}