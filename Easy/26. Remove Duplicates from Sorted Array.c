int removeDuplicates(int* nums, int numsSize) {
    int new_len = 1 ;
    int i = 1 ;
    while (i < numsSize)
    {
        if(nums[i] != nums[i - 1])
        nums[new_len++] = nums[i];
        i++;
    }
    return new_len;
}