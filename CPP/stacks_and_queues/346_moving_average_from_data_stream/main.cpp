#include "MovingAverage.hpp"
#include <cstdlib>
#include <iostream>


int main(void) {
    MovingAverage* ma = new MovingAverage(3);
    std::cout << "First : " << ma->next(1) << "\n";
    std::cout << "Second : " << ma->next(10) << "\n";
    std::cout << "Third : " << ma->next(3) << "\n";
    std::cout << "Fourth : " << ma->next(5) << "\n";
    delete ma;
    return EXIT_SUCCESS;
}
