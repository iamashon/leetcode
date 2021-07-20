#define MAX_SIZE 130000
int array[MAX_SIZE];

bool hash(int* array, int key)
{
    int index = 0;
    index = abs(key % MAX_SIZE);
    
    if (array[index] == key)
        return true;
    array[index] = key;
    return false;
}

bool containsDuplicate(int* nums, int numsSize){
    int i = 0;
    int array[MAX_SIZE] = {-1,};
    
    for (; i < numsSize; i++)
    {
        if(hash(array, nums[i]) == true)
            return true;
    }
    return false;
}
