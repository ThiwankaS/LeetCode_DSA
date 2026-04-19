#include "RecentCounter.hpp"
#include <cstdlib>
#include <iostream>

int main(void) {
    RecentCounter* recentCounter = new RecentCounter();
    
    // requests = [1], range is [-2999,1], return 1
    std::cout << "ping value :" << recentCounter->ping(1) << "\n";
    
    // requests = [1, 100], range is [-2900,100], return 2
    std::cout << "ping value :" << recentCounter->ping(100) << "\n";
    
    // requests = [1, 100, 3001], range is [1,3001], return 3
    std::cout << "ping value :" << recentCounter->ping(3001) << "\n";
    
    // requests = [1, 100, 3001, 3002], range is [2,3002], return 3
    std::cout << "ping value :" << recentCounter->ping(3002) << "\n";  
    return EXIT_SUCCESS;
}
