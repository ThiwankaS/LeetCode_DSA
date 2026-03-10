#include "Solution.hpp"

bool Solution::isSubsequence(std::string s, std::string t) {
    size_t i = 0, j = 0, len1 = s.size(), len2 = t.size();
    
    while(i < len1 && j < len2) {
        if(s.at(i) == t.at(j)) {
            ++i;
        }
        ++j;
    }
    return (i == len1);
}