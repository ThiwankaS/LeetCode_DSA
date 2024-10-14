#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int hash(int value)
{
    return value;
}

void map_init(int *map, int *nums, int size)
{
    for (int i = 0; i < size; i++)
    {
        int index = hash(nums[i]);
        map[index] = nums[i];
    }
}

bool map_lookup(int *map, int value)
{
    int index = hash(value);
    if (map[index] == value)
        return (true);
    else
        return (false);
}

int missingNumber(int *nums, int numsSize)
{
    int *map = calloc((numsSize + 1), sizeof(int));
    map_init(map, nums, numsSize);
    for (int i = 0; i < numsSize + 1; i++)
    {
        int index = hash(i);
        if (!map_lookup(map, i))
        {
            return (i);
        }
    }
    return 0;
}

int main(void)
{
    int nums[] = {3, 0, 1};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    printf("%d\n", missingNumber(nums, numsSize));
    return (0);
}