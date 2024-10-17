#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

#define SIZE 26

typedef struct
{
    char c;
    int count;
} Letter;

void map_init(Letter *map)
{
    for (int i = 0; i < SIZE; i++)
    {
        map[i].c = 36;
        map[i].count = 0;
    }
}

int hash(char c)
{
    return (c % 26);
}

int map_lookup(Letter *map, char c)
{
    int index = hash(c);
    if (map[index].c == c)
        return (index);
    else
        return (-1);
}

void map_insert(Letter *map, char c)
{
    int index = map_lookup(map, c);
    if (index != -1)
        map[index].count++;
    else
    {
        index = hash(c);
        for (int i = 0; i < SIZE; i++)
        {
            int try = (index + i) % SIZE;
            if (map[try].c == 36)
            {
                map[try].c = c;
                map[try].count++;
                break;
            }
        }
    }
}

bool areOccurrencesEqual(char *s)
{
    bool flag = true;
    int previous = 0, step = 0;
    int len = strlen(s);
    Letter *map = calloc(SIZE, sizeof(Letter));
    map_init(map);
    for (int i = 0; i < len; i++)
    {
        map_insert(map, s[i]);
    }
    for (int i = 0; i < SIZE; i++)
    {
        if (map[i].c != 36)
        {
            if (step == 0)
            {
                previous = map[i].count;
                step++;
            }
            else
            {
                if (map[i].count != previous)
                {
                    flag = false;
                    break;
                }
            }
        }
    }
    return (flag);
}

int main(void)
{
    char *s = "abacbc";
    if (areOccurrencesEqual(s))
    {
        printf("%s is a good string !\n", s);
    }
    else
    {
        printf("%s is not a good string !\n", s);
    }
    return (0);
}