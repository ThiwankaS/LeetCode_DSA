#include "Solution.hpp"
#include <queue>
#include <stack>
#include <unordered_map>
#include <vector>
#include <iostream>

void printArray(const std::string &msg, const std::vector<int> &arr) {
    std::cout << msg << " : [ ";

    for(int value : arr) {
        std::cout << value << " ";
    }
    std::cout << "] \n";
}

std::vector<int> Solution::nextGreatElement(std::vector<int>& nums1, std::vector<int>& nums2) {
    std::vector<int> result;
    std::stack<int> trace;
    std::unordered_map<int, int> history;

    for(int num : nums2 ) {
        while(!trace.empty() && num > trace.top()) {
            history[trace.top()] = num;
            trace.pop();
        }
        trace.push(num);
    }

    while(!trace.empty()) {
        history[trace.top()] = -1;
        trace.pop();
    }

    for(int value : nums1) {
        result.push_back(history[value]);
    }

    return result;
}

/**
  * solution using deque but not optimize for time complexity
*/
// vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
//     std::vector<int> result;
//
//     for(int i = 0; i < static_cast<int>(nums1.size()); ++i) {
//         std::deque<int> trace;
//         trace.push_back(nums1[i]);
//         bool found = false;
//
//         for(int j = 0; j < static_cast<int>(nums2.size()); ++j) {
//
//             if(nums1[i] == nums2[j]) {
//                 found = true;
//             }
//
//             if(found && trace.back() < nums2[j]) {
//                 trace.pop_back();
//                 trace.push_back(nums2[j]);
//                 break;
//             }
//         }
//
//         if(!trace.empty() && trace.front() == nums1[i]) {
//             result.push_back(-1);
//         } else {
//             result.push_back(trace.front());
//         }
//         
//         found = false;
//         trace.clear();
//     }
//     
//     return result;
// }
