#include "Solution.hpp"
#include <cctype>
#include <cstdlib>
#include <string>

std::string Solution::makeGood(std::string s) {
    std::string result = "";

    for(unsigned char c : s) {
        if(!result.empty() && (std::abs(c - result.back()) == 32)) {
            result.pop_back();
        } else {
            result.push_back(c);
        }
    }
    return result;
}
