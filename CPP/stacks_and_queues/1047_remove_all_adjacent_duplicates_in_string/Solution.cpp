#include "Solution.hpp"
#include <string>
#include <stack>

std::string Solution::removeDuplicates(std::string s) {
    std::string result = "";

    for(unsigned char c : s) {
        if(!result.empty() && result.back() == c) {
            result.pop_back();
        } else {
            result.push_back(c);
        }
    }

    return result;
}

/**
  below is using std::stack but there is still room for furher optimization
*/
// std::string Solution::removeDuplicates(std::string s) {
//     std::stack<unsigned char> history;
//
//     for(unsigned char c : s) {
//         if(history.empty()) {
//             history.push(c);
//         } else {
//             if(history.top() == c) {
//                 history.pop();
//             } else {
//                 history.push(c);
//             }
//         }
//     }
//
//     std::string result = "";
//     while(!history.empty()) {
//         result += history.top();
//         history.pop();
//     }
//     std::string final(result.rbegin(), result.rend());
//     return final;
// }
