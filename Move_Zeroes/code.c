void moveZeroes(int* nums, int numsSize)
{
    if (numsSize == 1) return;

    for(int i = 0, j = 0; i < numsSize; i++) {
        //i is the non-zero finder
        //j is the index
        if(nums[i]) {
            nums[j] = nums[i];
            if(i != j) {
                nums[i] = 0;
            }
            j++;
        }
    }
}
