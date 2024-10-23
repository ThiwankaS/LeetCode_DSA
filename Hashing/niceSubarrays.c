#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int nbr;
    int frq;
} Digit;

void map_init(Digit *map, int size)
{
    map[0].nbr = 0;
    map[0].frq = 1;
    for (int i = 1; i < size; i++)
    {
        map[i].frq = 0;
    }
}

int map_hash(int value, int size)
{
    if (value < 0)
    {
        value = value * -1;
    }
    return (value % (size + 1));
}

void map_insert(Digit *map, int numsSize, int value)
{
    int index = map_hash(value, numsSize);
    int i = 0, try = 0;
    while (i < numsSize)
    {
        try = (index + i) % (numsSize + 1);
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

int map_lookup(Digit *map, int numsSize, int value)
{
    int index = map_hash(value, numsSize);
    for (int i = 0; i < numsSize; i++)
    {
        int try = (index + i) % (numsSize + 1);
        if (map[try].nbr == value)
            return map[try].frq;
    }
    return (0);
}

int numberOfSubarrays(int *nums, int numsSize, int k)
{
    Digit *map = calloc(numsSize + 1, sizeof(Digit));
    map_init(map, numsSize);
    int ans = 0, count = 0, curr = 0;
    for (int i = 0; i < numsSize; i++)
    {
        curr = curr + (nums[i] % 2);
        count = map_lookup(map, numsSize, (curr - k));
        ans = ans + count;
        map_insert(map, numsSize, curr);
    }
    return (ans);
}

int main(void)
{
    // int nums[] = {1, 1, 2, 1, 1};
    // int k = 3;
    int nums[] = {2, 2, 2, 1, 2, 2, 1, 2, 2, 2};
    int k = 2;
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    printf("No of nice sub-arrays : %d\n", numberOfSubarrays(nums, numsSize, k));
    return (0);
}