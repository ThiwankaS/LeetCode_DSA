#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int num;
    int count;
} Digit;

int hash(int value, int size)
{
    return (value % size);
}

void map_init(Digit *map, int size)
{
    for (int i = 0; i < size; i++)
    {
        map[i].num = -1;
        map[i].count = 0;
    }
}

int map_lookup(Digit *map, int value, int size)
{
    int index = hash(value, size);
    for (int i = 0; i < size; i++)
    {
        int try = (index + i) % size;
        if (map[try].num != -1 && map[try].num == value)
        {
            return try;
        }
    }
    return (-1);
}

void sort(int *arr, int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

void map_insert(Digit *map, int value, int size)
{
    int index = map_lookup(map, value, size);
    if (index != -1 && map[index].num == value)
        map[index].count++;
    else
    {
        index = hash(value, size);
        for (int i = 0; i < size; i++)
        {
            int try = (index + i) % size;
            if (map[try].num == -1)
            {
                map[try].num = value;
                map[try].count++;
                break;
            }
        }
    }
}

int *intersection(int **nums, int numsSize, int *numsColSize, int *returnSize)
{
    int size = 0, step = 0;
    for (int i = 0; i < numsSize; i++)
    {
        size = size + numsColSize[i];
    }
    int *result = calloc((step + 1), sizeof(int));
    Digit *map = calloc(size, sizeof(Digit));
    map_init(map, size);
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = 0; j < numsColSize[i]; j++)
        {
            map_insert(map, nums[i][j], size);
        }
    }
    for (int j = 0; j < size; j++)
    {
        if (map[j].count == numsSize)
        {
            if (step == 0)
            {
                result[step] = map[j].num;
                *returnSize = step + 1;
                step++;
            }
            else
            {
                result = realloc(result, (sizeof(int) * (step + 1)));
                result[step] = map[j].num;
                *returnSize = step + 1;
                step++;
            }
        }
    }
    for (int j = 0; j < size; j++)
    {
        printf("map[%d].num : %d | map[%d].count : %d\n", j, map[j].num, j, map[j].count);
    }
    sort(result, step);
    free(map);
    return (result);
}

int main(void)
{
    // int **nums = calloc(3, sizeof(int *));
    // int *numsColSize = calloc(3, sizeof(int));
    // nums[0] = calloc(5, sizeof(int));
    // nums[1] = calloc(4, sizeof(int));
    // nums[2] = calloc(4, sizeof(int));
    // nums[0][0] = 3;
    // nums[0][1] = 1;
    // nums[0][2] = 2;
    // nums[0][3] = 4;
    // nums[0][4] = 5;
    // nums[1][0] = 1;
    // nums[1][1] = 2;
    // nums[1][2] = 3;
    // nums[1][3] = 4;
    // nums[2][0] = 3;
    // nums[2][1] = 4;
    // nums[2][2] = 5;
    // nums[2][3] = 6;
    // int numsSize = 3;

    // numsColSize[0] = 5;
    // numsColSize[1] = 4;
    // numsColSize[2] = 4;

    // int **nums = calloc(2, sizeof(int *));
    // int *numsColSize = calloc(2, sizeof(int));
    // nums[0] = calloc(3, sizeof(int));
    // nums[1] = calloc(3, sizeof(int));
    // nums[0][0] = 1;
    // nums[0][1] = 2;
    // nums[0][2] = 3;
    // nums[1][0] = 4;
    // nums[1][1] = 5;
    // nums[1][2] = 6;
    // int numsSize = 2;

    // numsColSize[0] = 3;
    // numsColSize[1] = 3;

    // int **nums = calloc(2, sizeof(int *));
    // int *numsColSize = calloc(2, sizeof(int));
    // nums[0] = calloc(7, sizeof(int));
    // nums[1] = calloc(6, sizeof(int));
    // nums[0][0] = 7;
    // nums[0][1] = 34;
    // nums[0][2] = 45;
    // nums[0][3] = 10;
    // nums[0][4] = 12;
    // nums[0][5] = 27;
    // nums[0][6] = 13;
    // nums[1][0] = 27;
    // nums[1][1] = 21;
    // nums[1][2] = 45;
    // nums[1][3] = 10;
    // nums[1][4] = 12;
    // nums[1][5] = 13;
    // int numsSize = 2;

    // numsColSize[0] = 7;
    // numsColSize[1] = 6;

    int **nums = calloc(2, sizeof(int *));
    int *numsColSize = calloc(2, sizeof(int));
    nums[0] = calloc(6, sizeof(int));
    nums[1] = calloc(6, sizeof(int));
    nums[0][0] = 4;
    nums[0][1] = 43;
    nums[0][2] = 15;
    nums[0][3] = 30;
    nums[0][4] = 27;
    nums[0][5] = 22;
    nums[1][0] = 15;
    nums[1][1] = 30;
    nums[1][2] = 43;
    nums[1][3] = 27;
    nums[1][4] = 10;
    nums[1][5] = 4;
    int numsSize = 2;

    numsColSize[0] = 6;
    numsColSize[1] = 6;

    int returnSize = 0;
    int *result = intersection(nums, numsSize, numsColSize, &returnSize);
    printf("returnSize : %d\n", returnSize);
    printf("{");
    for (int i = 0; i < returnSize; i++)
    {
        printf("%d,", result[i]);
    }
    printf("} \n");
    free(result);
    return (0);
}