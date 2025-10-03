#include <iostream>
#include <string>

using namespace std;

bool checkIfPalindrome(const string &str) {
    int left = 0, right = str.length() - 1;
    while(left < right) {
        if(str.at(left) != str.at(right))
            return false;
        left++;
        right--;
    }
    return true;
}

int main (void) {
    (checkIfPalindrome("racecar"))
        ? (cout << "Is a palindrome !\n")
        : (cout << "Is not a palindrome !\n");
    return (EXIT_SUCCESS);
}
