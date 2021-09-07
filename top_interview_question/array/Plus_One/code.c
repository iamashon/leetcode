/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize){

    int* result = (int*)malloc(sizeof(int)*(digitsSize + 1));
    int i = 0;
    //try to find 9 case, 9 need to special handle
    for (; i < digitsSize; i++)
    {
        if(digits[i] != 9)
            break;
    }
    //all 9 case, ex: 9999
    if (i == digitsSize)
    {
        *returnSize = digitsSize + 1;
        result[0] = 1;
        for(i = 1; i < digitsSize + 1; i++)
            result[i] = 0;
        return result;
    }
    //other case
    i = digitsSize - 1;//final i index
    result[i] = digits[i] + 1;//final number + 1
    for (; i > 0; i--)
    {
        if (result[i] == 10)
        {
            result[i] = 0;
            result[i - 1] = digits[i - 1] + 1;
        }
        else
            result[i - 1] = digits[i - 1];
    }
    *returnSize = digitsSize;
    return result;
}
