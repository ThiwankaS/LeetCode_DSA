#include "RecentCounter.hpp"
#include <queue>

int RecentCounter::ping(int t) {
    while (!queue.empty() && queue.front() < (t - 3000)) {
        queue.pop();
    }
    queue.push(t);
    return static_cast<int>(queue.size());
}
