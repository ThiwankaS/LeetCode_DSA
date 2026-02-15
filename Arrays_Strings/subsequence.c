#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isSubsequence(char *s, char *t)
{
    int i = 0, j = 0;
    while (*(s + i) && *(t + j))
    {
        if (s[i] == t[j])
        {
            i++;
        }
        j++;
    }
    return (i == strlen(s));
}

int main(void)
{
    char *s = "ase";
    char *t = "abcde";
    if (isSubsequence(s, t))
    {
        printf(" %s is a subcequence of %s \n", s, t);
    }
    else
    {
        printf(" %s is a not subcequence of %s \n", s, t);
    }
    return (0);
}