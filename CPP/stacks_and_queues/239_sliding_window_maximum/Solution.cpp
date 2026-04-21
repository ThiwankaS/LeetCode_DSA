#include "Solution.hpp"
#include <deque>
#include <iostream>
#include <ranges>
#include <vector>

void printWindow(Iterator start, Iterator end) {
    std::cout << "window : [ ";
    for(int value : std::ranges::subrange(start, end)) {
        std::cout << value << " ";
    }
    std::cout << "] \n";
}

std::vector<int> Solution::maxSlidingWindow(std::vector<int>& nums, int k) {
    std::vector<int> result;
    std::deque<int> history;

    for(int i = 0; i < static_cast<int>(nums.size()); ++i) {
        while (!history.empty() && nums[i] > nums[history.back()]) {
            history.pop_back();
        }
        history.push_back(i);

        if(history.front() + k == i) {
            history.pop_front();
        }

        if(i >= k - 1) {
            result.push_back(nums[history.front()]);
        }
    }
    return result;
}
