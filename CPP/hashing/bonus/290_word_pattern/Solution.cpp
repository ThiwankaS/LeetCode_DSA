#include "Solution.hpp"
#include <string>
#include <unordered_map>
#include <sstream>

bool Solution::wordPattern(std::string& pattern, std::string& s) {
    std::unordered_map<unsigned char, int> character_map = { };
    std::unordered_map<std::string, int> word_map = { };
     
    std::istringstream iss (s);
    std::string token;
    int index = 0;

    while(iss >> token) {
        if(character_map[static_cast<unsigned char>(pattern[index])] != word_map[token]) {
            return (false);
        }
        character_map[static_cast<unsigned char>(pattern[index])] = index + 1;
        word_map[token] = index + 1;
        index++;
    }
    if(index != static_cast<int>(pattern.size())) {
        return (false);
    }
    return (true);
}
