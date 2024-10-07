#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool isVowel(char c)
{
    bool result = false;
    switch (c)
    {
    case 'a':
        result = true;
        break;
    case 'e':
        result = true;
        break;
    case 'i':
        result = true;
        break;
    case 'o':
        result = true;
        break;
    case 'u':
        result = true;
        break;
    case 'A':
        result = true;
        break;
    case 'E':
        result = true;
        break;
    case 'I':
        result = true;
        break;
    case 'O':
        result = true;
        break;
    case 'U':
        result = true;
        break;
    default:
        result = false;
    }
    return result;
}

char *reverseVowels(char *s)
{
    int len = strlen(s);
    int i = 0, j = len - 1;
    char *str = (char *)malloc((len + 1) * sizeof(char));
    while (i <= j)
    {
        if (isVowel(s[i]))
        {
            if (isVowel(s[j]))
            {
                str[i] = s[j];
                str[j] = s[i];
                i++;
                j--;
            }
            else
            {
                str[j] = s[j];
                j--;
            }
        }
        else
        {
            str[i] = s[i];
            i++;
        }
    }
    str[len] = '\0';
    return (str);
}
int main(void)
{
    char *s1 = "IceCreAm";
    char *s2 = "leetcode";
    char *result1 = reverseVowels(s1);
    char *result2 = reverseVowels(s2);
    printf("Befor s1 : %s\n", s1);
    printf("Befor s2 : %s\n", s2);
    printf("After : %s\n", result1);
    printf("After : %s\n", result2);
    free(result1);
    free(result2);
    return (0);
}