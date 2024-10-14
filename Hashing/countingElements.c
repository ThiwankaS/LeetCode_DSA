#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int hash(int value, int size)
{
    return (value % (size + 1));
}

void map_init(int *map, int size)
{
    for (int i = 0; i <= size; i++)
    {
        map[i] = -1;
    }
}

void map_insert(int *map, int *arr, int arrSize)
{
    for (int i = 0; i < arrSize; i++)
    {
        int index = hash(arr[i], arrSize);
        if (map[index] == -1)
        {
            map[index] = arr[i];
        }
        else
        {
            int j = 0;
            int try = (index + j) % (arrSize + 1);
            while (map[try] != -1)
            {
                j++;
                try = (index + j) % (arrSize + 1);
            }
            map[try] = arr[i];
        }
    }
}

bool map_lookup(int *map, int value, int size)
{
    int index = hash(value, size);

    for (int i = 0; i < size; i++)
    {
        int try = (index + i) % (size + 1);
        if (map[try] == value)
            return (true);
    }
    return (false);
}

int countElements(int *arr, int arrSize)
{
    int *map = calloc(arrSize + 1, sizeof(int));
    int count = 0;
    map_init(map, arrSize);
    map_insert(map, arr, arrSize);
    for (int j = 0; j <= arrSize; j++)
    {
        printf("map[%d] : %d\n", j, map[j]);
    }
    for (int j = 0; j < arrSize; j++)
    {
        if (map_lookup(map, arr[j], arrSize) && map_lookup(map, arr[j] + 1, arrSize))
            count++;
    }
    printf("%d\n", 999 % 6);
    free(map);
    return (count);
}

int main(void)
{
    int nums[] = {1, 2, 3};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    printf("No of elements : %d\n", countElements(nums, numsSize));
    return (0);
}