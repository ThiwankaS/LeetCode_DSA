#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct
{
    int key;
    int value;
} Node;

int hash(int value, int size)
{
    if (value < 0)
        value = value * -1;
    return (value % (size + 1));
}

void HashMap_init(int size, Node *map)
{
    for (int i = 0; i < size; i++)
        map[i].key = -1;
}

bool HashMap_insert(int size, Node *map, Node node)
{
    int position = hash(node.value, size);
    for (int i = 0; i < size; i++)
    {
        int try = (i + position) % size;
        if (map[try].key == -1)
        {
            map[try].key = node.key;
            map[try].value = node.value;
            return (true);
        }
    }
    return (false);
}

int HasMap_lookup(int size, Node *map, int value)
{
    int position = hash(value, size);
    for (int i = 0; i < size; i++)
    {
        int try = (i + position) % size;
        if (map[try].key != -1 && map[try].value == value)
        {
            return (map[try].key);
        }
    }
    return (-1);
}

int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    returnSize = calloc(2, sizeof(int));
    Node *map = calloc((numsSize + 1), sizeof(Node *));
    HashMap_init(numsSize, map);
    for (int i = 0; i < numsSize; i++)
    {
        int index = HasMap_lookup(numsSize, map, target - nums[i]);
        if (index != -1)
        {
            returnSize[0] = index;
            returnSize[1] = i;
        }
        else
        {
            Node node = {.key = i, .value = nums[i]};
            HashMap_insert(numsSize, map, node);
        }
    }
    free(map);
    return (returnSize);
}

int main(void)
{
    // int nums[] = {2, 7, 11, 15};
    // int target = 9;
    // int nums[] = {3, 2, 4};
    // int target = 6;
    int nums[] = {3, 3};
    int target = 6;
    int size = sizeof(nums) / sizeof(nums[0]);
    int *returnSize = NULL;
    returnSize = twoSum(nums, size, target, returnSize);
    printf("Return Size : { %d, %d }\n", returnSize[0], returnSize[1]);
    free(returnSize);
    return (0);
}