#include "Solution.hpp"

int Solution::stringLenght(const std::string& str) {
    int lenght = 0, zero_count = 0, left = 0;

    for(int right = 0; right < str.size(); ++right) {
        if(str.at(right) == '0') {
            ++zero_count;
        }
        while (zero_count > 1) {
            if(str.at(left) == '0') {
                --zero_count;
            }
            ++left;
        }
        lenght = std::max(lenght, right - left + 1);
    }
    return (lenght);
}