#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
    char c;
    int count;
} Point;

int hash(int c, int length)
{
    return (c % length);
}

int map_lookup(Point *map, char c, int size)
{
    int index = hash(c, size);
    if (map[index].c != 33)
        return (index);
    return (-1);
}

void map_init(Point *map, int size)
{
    for (int i = 0; i < size; i++)
    {
        map[i].c = 33;
        map[i].count = 0;
    }
    map[size].c = 36;
    map[size].count = 0;
}

int map_size(Point *map)
{
    int i = 0, count = 0;
    while (map[i].c != 36)
    {
        if (map[i].c != 33 && map[i].count != 0)
            count++;
        i++;
    }
    return (count);
}

void map_insert(Point *map, char c, int size)
{
    int index = map_lookup(map, c, size);
    if (index != -1)
        map[index].count++;
    else
    {
        index = hash(c, size);
        map[index].c = c;
        map[index].count++;
    }
}

void map_delete(Point *map, char c, int size)
{
    int index = map_lookup(map, c, size);
    if (index != -1 && map[index].count > 1)
        map[index].count--;
    else if (index != -1 && map[index].count == 1)
    {
        map[index].c = 33;
        map[index].count = 0;
    }
}

int findLongestSubstring(char *s, int k)
{
    int length = strlen(s);
    Point *map = calloc(length + 1, sizeof(Point));
    map_init(map, length);
    int left = 0, ans = 0;
    for (int right = 0; right < length; right++)
    {
        map_insert(map, s[right], length);
        while (map_size(map) > k)
        {
            map_delete(map, s[left], length);
            left++;
        }
        ans = fmax(ans, right - left + 1);
    }
    return (ans);
}

int main(void)
{
    char *s = "ecccfcebbba";
    int k = 3;
    printf("%d\n", findLongestSubstring(s, k));
    return (0);
}