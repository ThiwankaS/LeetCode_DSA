#include "Solution.hpp"
#include <string>

bool Solution::backspaceCompare(std::string s, std::string t) {

    auto build = [](const std::string& str) {

        std::string result = "";

        for(char c : str) {
            if(c != '#') {
                result.push_back(c);
            } else if(!result.empty()) {
                result.pop_back();
            }
        }

        return result;
    };

    return build(s) == build(t);
}
