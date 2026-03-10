#pragma once

#include <vector>
#include <iostream>
#include <string>

class Solution {
    public:
        std::vector<std::string> queryResult(
            const std::vector<int>& nums, 
            const std::vector<std::pair<int, int>>& query, int limit);
};