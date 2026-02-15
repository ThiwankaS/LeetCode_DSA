#include <stdio.h>
#include <string.h>

void reverseString(char *s, int sSize)
{
    int i = 0;
    int j = sSize - 1;
    char temp;
    while (i < j)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
}

int main(void)
{
    char s[] = {'H', 'a', 'n', 'n', 'a', 'h'};
    int sSize = strlen(s);
    printf("Before : %s \n", s);
    reverseString(s, sSize);
    printf("After : %s \n", s);
    return (0);
}
