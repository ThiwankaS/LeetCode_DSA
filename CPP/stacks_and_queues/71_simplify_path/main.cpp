#include "Solution.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

int main(void) {
    std::string str = "/home//foo/";
    Solution s;

    std::cout << "unix style absolute path  : [" << str << "]\n";
    std::cout << "simplified canonical path : [" << s.simplifyPath(str)<< "]\n";
    
    return EXIT_SUCCESS;
}
