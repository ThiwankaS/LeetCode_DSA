#include "Solution.hpp"

bool Solution::checkIfPangram(const std::string& sentence) {
    std::set<unsigned char> alphebet;
    for(size_t i = 0; i < sentence.length(); ++i) {
        unsigned char c = sentence.at(i);
        if(alphebet.contains(c)) {
            continue;
        } else {
            alphebet.emplace(c);
        }
    }
    if(alphebet.size() == 26)
        return (true);
    return (false);
}