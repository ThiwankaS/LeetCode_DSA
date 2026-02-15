#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool checkIfPalindrome(char *str)
{
    // Unsing two pointer technique here
    int left = 0;
    int right = strlen(str) - 1;
    while (left < right)
    {
        if (str[left] != str[right])
        {
            return (false);
        }
        left++;
        right--;
    }
    return (true);
}

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        if (checkIfPalindrome(argv[1]))
        {
            printf(" %s is a palindrome !\n", argv[1]);
        }
        else
        {
            printf(" %s is not a palindrome !\n", argv[1]);
        }
    }
    return (0);
}