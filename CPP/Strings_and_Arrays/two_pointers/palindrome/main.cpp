#include "Solution.hpp"

int main (int argc, char *argv[]) {
    if(argc != 2) {
        std::cerr << "Mal-using program!\n";
        return (EXIT_FAILURE);
    }

    Solution s(argv[1]);

    if(s.isPalindrome()) {
        std::cout <<"Yes, " << s.getValue() << " is a palindrome !\n";
    } else {
        std::cout <<"Oh no," << s.getValue() << " is not palindrome !\n";
    }
    return (EXIT_SUCCESS);
}