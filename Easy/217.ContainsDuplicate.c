// qsort faster than bubble sort
#include <stdlib.h>
#include <stdbool.h>

int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

bool containsDuplicate(int *nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), cmp);
    for (int i = 0; i < numsSize - 1; i++) {
        if (nums[i] == nums[i + 1])
            return true;
    }
    return false;
}


/*
#include <stdbool.h>
#include <stdio.h>
void ft_swap(int *a,int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp ;
}
void sort(int size,int *arr)
{
    int i = 0 ;
    while (i < size -1)
    {
        int j = 0 ;
        while (j < size -1 - i)
        {
            if (arr[j] > arr[j +1])
            ft_swap(&arr[j],&arr[j+1]);
            j++;
        }
        i++;
    }
}
bool containsDuplicate(int* nums, int numsSize) 
{
    sort(numsSize,nums);
        int j = 0 ;
        while (j < numsSize)
        {
            if (nums[j] == nums[j +1])
                return true;
            j++;
        }
    return false;
}
int main()
{
    int arr[] = {1,2,3,4,1,2};
    int res = containsDuplicate(arr,6);
    printf("%d",res);
}
*/
