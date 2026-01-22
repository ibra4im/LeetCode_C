int searchInsert(int* nums, int numsSize, int target) 
{
    // binary search algo
    for (int i = 0 ;i < numsSize;i++)
    {
        if (nums[i] == target)
        {
            return i;
        }
    }
    // search position it would be if it were inserted in order.
    for (int i = 0 ;i < numsSize;i++)
    {
        if (nums[i] <= target && nums[i + 1] >= target)
        {
            return i +1;
        }
    }
        if (nums[numsSize -1] < target)
            return numsSize-1;
    return 0 ; 
}