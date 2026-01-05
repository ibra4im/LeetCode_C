/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdio.h>
#include <stdlib.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize) 
{
    int *arr_target = malloc(2 * sizeof(int));
    int i = 0 ;
    while (i < numsSize)
    {
        int k = i + 1;
        while (k < numsSize)
        {
            if(nums[i] + nums[j] == target)
            {
                arr_target[0] = i;
                arr_target[1] = j;
                *returnSize = 2 ;
                return arr_target;
            }
            k++;
        }
        i++;
    }

    *numsSize = 0;
    return NULL ;
}