#include "Solution.hpp"
#include <cstddef>
#include <stack>

std::vector<int> Solution::finalPrices(std::vector<int>& prices) {
    std::vector<int> result(prices.begin(), prices.end());
    std::stack<size_t> trace;

    for(size_t i = 0; i < prices.size(); ++i) {
        while(!trace.empty() && prices[trace.top()] >= prices[i]) {
            size_t index = trace.top();
            trace.pop();
            result[index] -= prices[i];
        }
        trace.push(i);
    }

    return result;
}

/**
  * even the below solution is perfect it has time complexity of O(n*n) since this use brute force strategy
  * can reduce the time complexity by using liner scanning startegy with monotonic stack, but will have
  * space complexity on O(n)
*/

// std::vector<int> Solution::finalPrices(std::vector<int>& prices) {
//     std::vector<int> result;
//     
//     auto getNext = [&](int x, size_t index) {
//         for(size_t j = index + 1; j < prices.size(); ++j) {
//             if(x >= prices[j]) {
//                 return prices[j];
//             }
//         }
//         return 0;
//     };
//
//     for(size_t i = 0; i < prices.size(); ++i) {
//         result.push_back(prices[i] - getNext(prices[i], i));
//     }
//
//     return result;
// }
