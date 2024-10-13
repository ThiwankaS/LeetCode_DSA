#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct
{
    char c;
    int count;
} Letter;

int hash(char c)
{
    return c - 97;
}

void map_init(Letter *map, char *sentence)
{
    int length = strlen(sentence);
    for (int i = 0; i < length; i++)
    {
        int index = hash(sentence[i]);
        map[index].c = sentence[i];
        map[index].count++;
    }
}

bool checkIfPangram(char *sentence)
{
    Letter *map = calloc(26, sizeof(Letter));
    map_init(map, sentence);
    for (int i = 0; i < 26; i++)
    {
        if (map[i].count < 1)
            return (false);
    }
    free(map);
    return (true);
}

int main(void)
{
    char *sentence = "leetcode";
    if (checkIfPangram(sentence))
        printf(" %s is a pangram !\n", sentence);
    else
        printf(" %s is not a pangram !\n", sentence);
    return (0);
}