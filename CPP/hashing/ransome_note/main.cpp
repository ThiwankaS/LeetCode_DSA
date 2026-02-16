#include "Solution.hpp"
#include <cstdlib>
#include <string>

int main(void) {
    Solution s;
    
    std::string ransomeNote = "aa";
    std::string magazine = "ab";

    if(s.canConstruct(ransomeNote,magazine)) {
        std::cout << "Note can be constructed! \n";
    } else {
        std::cout << "Note can not be constructed! \n";
    }

    return(EXIT_SUCCESS);
}
