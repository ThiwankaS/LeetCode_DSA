#include "Solution.hpp"
#include <cstring>
#include <stack>
#include <string>
#include <unordered_map>

bool Solution::isValid(const std::string& s) {
    std::stack<unsigned char> history;
    // declaring all the valid charater combinations
    std::unordered_map<unsigned char, unsigned char> matching = {
        {'(' , ')'}, {'[', ']'}, {'{', '}'}
    };
    // iterate through the string
    for(unsigned char c : s) {
        // check if the character consist in the key values
        if(matching.contains(c)) {
            // adding a key aka opening character to the stack
            history.push(c);
        } else {
            // safety check before accessing top in the history, prevent crashing
            if(history.empty()) {
                return false;
            }
            unsigned char previous = history.top();
            // if the particular character is not a matching closing character for previous, then invald 
            if(matching[previous] != c) {
                return false;
            }
            // removing the corresponding previous character from the history
            history.pop();
        }
    }
    return history.empty();
}
