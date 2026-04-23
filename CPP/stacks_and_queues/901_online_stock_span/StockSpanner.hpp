#pragma once
#include <stack>
#include <utility>

class StockSpanner {
    
    private:
        std::stack<std::pair<int, int>> history;

    public:
        StockSpanner() {}
        int next(int price);
};
