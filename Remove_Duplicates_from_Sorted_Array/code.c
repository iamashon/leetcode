int removeDuplicates(int* nums, int numsSize){
    //handle happy case
    if (numsSize == 0) return 0;

    //
    int i = 0;
    //i = index, j = the finder
    //once j find the different one, copy to i+1
    //or keep looking
    for (int j = 1; j < numsSize; j++) {
        if (nums[j] != nums[i]) {
            i++;
            nums[i] = nums[j];
        }
    }
    return i + 1;
}
