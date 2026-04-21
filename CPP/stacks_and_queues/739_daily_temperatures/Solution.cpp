#include "Solution.hpp"
#include <vector>
#include <stack>

std::vector<int> Solution::dailyTemperatures(const std::vector<int>& temperatures) {
    int size = static_cast<int>(temperatures.size());
    std::stack<int> buffer;
    std::vector<int> result(size);

    for(int i = 0; i < size; ++i) {
        if(buffer.empty()) {
            buffer.push(i);
        } else {
            while(!buffer.empty() && temperatures[i] > temperatures[buffer.top()]) {
                result[buffer.top()] = i - buffer.top();
                buffer.pop();
            }
            buffer.push(i);
        }
    }
    return result;
}
