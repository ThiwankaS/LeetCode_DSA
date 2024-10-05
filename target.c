#include <stdio.h>
#include <stdbool.h>

bool checkForTarget(int nums[], int size, int target)
{
    // Unsing two pointer technique here
    int left = 0;
    int right = size - 1;
    while (left < right)
    {
        if (nums[left] + nums[right] == target)
        {
            return (true);
        }
        if (nums[left] + nums[right] > target)
        {
            right--;
        }
        else
        {
            left++;
        }
    }

    return (false);
}

int main(void)
{
    int nums[] = {1, 2, 4, 6, 8, 7, 14, 15};
    int size = sizeof(nums) / sizeof(nums[0]);
    if (checkForTarget(nums, size, 13))
    {
        printf("target exists !\n");
    }
    else
    {
        printf("target not exists !\n");
    }
    return (0);
}