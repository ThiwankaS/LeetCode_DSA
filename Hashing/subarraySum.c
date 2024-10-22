#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int nbr;
    int frq;
} Prefix;

void map_init(Prefix *map, int numsSize)
{
    map[0].nbr = 0;
    map[0].frq = 1;
    for (int i = 1; i < numsSize; i++)
    {
        map[i].frq = 0;
    }
}

int hash(int value, int numsSize)
{
    if (value < 0)
        value = value * -1;
    return (value % (numsSize + 1));
}

int map_lookup(Prefix *map, int value, int numsSize)
{
    int position = hash(value, numsSize);
    int i = 0, try = 0;
    try = (position + i) % (numsSize + 1);
    while (i < numsSize)
    {
        if (map[try].nbr == value)
        {
            return (map[try].frq);
        }
        i++;
        try = (position + i) % (numsSize + 1);
    }
    return (0);
}

void map_insert(Prefix *map, int value, int numsSize)
{
    int position = hash(value, numsSize);
    int i = 0, try = 0;
    while (i < numsSize)
    {
        try = (position + i) % (numsSize + 1);
        if (map[try].nbr == value)
        {
            map[try].frq++;
            break;
        }
        else if (map[try].frq == 0)
        {
            map[try].nbr = value;
            map[try].frq++;
            break;
        }
        i++;
    }
}

int subarraySum(int *nums, int numsSize, int k)
{
    Prefix *map = calloc(numsSize + 1, sizeof(Prefix));
    map_init(map, numsSize);
    printf("numsSize : %d\n", numsSize);
    int sum = 0, ans = 0, count = 0;
    for (int i = 0; i < numsSize; i++)
    {
        sum = sum + nums[i];
        count = map_lookup(map, (sum - k), numsSize);
        ans = ans + count;
        map_insert(map, sum, numsSize);
    }
    return (ans);
}

int main(void)
{
    // int nums[] = {1, 1, 1};
    // int k = 2;
    int nums[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int k = 0;
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    printf("%d\n", subarraySum(nums, numsSize, k));
    return (0);
}