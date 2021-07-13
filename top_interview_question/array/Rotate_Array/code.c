

void reverse(int* array_left, int* array_right){
    //left and right index would be close in process
    while(array_left < array_right)
    {
        //switch
        int temp = *array_left;
        *array_left = *array_right;
        *array_right = temp;
        //one step
        array_left++;
        array_right--;
    }
}

void rotate(int* nums, int numsSize, int k){
    //error case handle-1
    k = k%numsSize;
    //error case handle-2
    if (nums == NULL || k == 0 || numsSize == 1) return;
    //reverse all
    reverse(&nums[0], &nums[numsSize - 1]);
    //reverse 0~k
    reverse(&nums[0], &nums[k - 1]);
    //reverse k+1~end
    reverse(&nums[k], &nums[numsSize - 1]);
}
