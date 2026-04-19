#pragma once
#include <queue>

class RecentCounter {
    private:
        std::queue<int> queue;
    public:
        RecentCounter () {}
        int ping(int t);
};
