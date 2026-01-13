#include "Solution.hpp"

char Solution::repeatedCharacter(const std::string& s) {
    std::set<char> repeated;

    for(size_t i = 0; i < s.length(); ++i) {
        char c = s.at(i);
        if(repeated.contains(c)) {
            return (c);
        } else {
            repeated.emplace(c);
        }
    }
    return (' ');
}