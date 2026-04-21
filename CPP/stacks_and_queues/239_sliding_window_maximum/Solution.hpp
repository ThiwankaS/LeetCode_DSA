#pragma once
#include <vector>

using Iterator = std::vector<int>::const_iterator;

void printWindow(Iterator start, Iterator end);

class Solution {
    public:
        std::vector<int> maxSlidingWindow(std::vector<int>& nums, int k);
};
