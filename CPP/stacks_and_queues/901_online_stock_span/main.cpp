#include "StockSpanner.hpp"
#include <cstdlib>
#include <iostream>

int main(void) {
    StockSpanner* sp = new StockSpanner();
    int result;

    result = sp->next(100);
    std::cout << "result : " << result << "\n";

    result = sp->next(80);
    std::cout << "result : " << result << "\n";

    result = sp->next(60);
    std::cout << "result : " << result << "\n";

    result = sp->next(70);
    std::cout << "result : " << result << "\n";

    result = sp->next(60);
    std::cout << "result : " << result << "\n";

    result = sp->next(75);
    std::cout << "result : " << result << "\n";

    result = sp->next(85);
    std::cout << "result : " << result << "\n";

    result = sp->next(110);
    std::cout << "result : " << result << "\n";
    delete sp;
    return EXIT_SUCCESS;
}
