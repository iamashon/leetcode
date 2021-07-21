
int singleNumber(int* nums, int numsSize){
    int i = 0, tmp = 0;

    //every nums xor next nums, the last would be the along one
    tmp = nums[i];
    for (i = 1; i < numsSize; i++)
    {
        tmp = tmp ^ nums[i];
    }
    return tmp;
}
