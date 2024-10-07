#include <stdio.h>
#include <math.h>
#include <string.h>

int findLength(char *s)
{
    int j = 0, countZero = 0, ans = 0, length = strlen(s);
    for (int i = 0; i < length; i++)
    {
        if (s[i] == '0')
            countZero++;
        while (countZero > 1)
        {
            if (s[j] == '0')
            {
                countZero--;
            }
            j++;
        }
        ans = fmax(ans, i - j + 1);
    }
    return (ans);
}

int main(void)
{
    char *s = "1101100111";
    printf("Longest sunstring which contain oly one '0' : %d \n", findLength(s));
    return (0);
}