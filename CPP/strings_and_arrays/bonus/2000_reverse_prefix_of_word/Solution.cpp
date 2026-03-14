#include "Solution.hpp"
#include <algorithm>
#include <string>

std::string Solution::reversePrefix(std::string word, char ch) {
    
    if(word.empty()) {
        return (word);
    }
    auto it = std::find(word.begin(), word.end(), ch);
    
    if(it != word.end()) {
        std::reverse(word.begin(), std::next(it));
    }

    return (word);
}

/**
  * legacy way of solving the problem
*/
// std::string Solution::reversePrefix(std::string word, char ch) {
//     
//     if(word.empty()) {
//         return (word);
//     }
//
//     int lenght = word.length();
//     
//     for(int i = 0; i < lenght; i++) {
//         if(word[i] == ch) {
//             int left = 0;
//             int right = i;
//             while(left <= right) {
//                 std::swap(word[left], word[right]);
//                 left++;
//                 right--;
//             }
//             return (word);
//         }
//     }
//     return (word);
// }
