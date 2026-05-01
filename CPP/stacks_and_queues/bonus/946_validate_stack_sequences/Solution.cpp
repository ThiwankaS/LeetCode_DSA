#include "Solution.hpp"
#include <vector>
#include <stack>

bool Solution::validateStackSequences(const std::vector<int>& pushed, std::vector<int>& popped) {
    std::stack<int> trace;
    int index = 0;
    
    for(int value : pushed) {
        trace.push(value); 
        while(!trace.empty() && popped[index] == trace.top()) {
            trace.pop();
            ++index;
        }
    }

    return trace.empty() ? true : false;
}
