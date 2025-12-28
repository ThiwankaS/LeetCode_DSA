#include "Solution.hpp"

bool Solution::isPalindrome() {
    size_t start    = 0;
    size_t end      = _str.size() - 1;

    while(start < end) {
        if(_str.at(start++) != _str.at(end--)) {
            return (false);
        }
    }
    return (true);
}

std::string Solution::getValue() {
    return (_str);
}