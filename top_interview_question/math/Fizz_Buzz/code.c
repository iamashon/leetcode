

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char ** fizzBuzz(int n, int* returnSize){
    *returnSize = n; //
    char **rtn = (char **)malloc(n*sizeof(char *)); //return array
    
    for (int i = 1; i <= n; i++)
    {
        char tmp[10]; //fizzBuzz character
        //start from 15->5or3->none
        if (i % 15 == 0)
        {
            sprintf(tmp, "%s", "FizzBuzz");
        }
        else if (i % 5 == 0)
        {
            sprintf(tmp, "%s", "Buzz");
        }
        else if (i % 3 == 0)
        {
            sprintf(tmp, "%s", "Fizz");
        }
        else
        {
            sprintf(tmp, "%d", i);
        }
        //alloc mem for each block in rtn
        *(rtn + i -1) = malloc(sizeof(tmp));
        //copy tmp into mem block
        memcpy(*(rtn + i -1), tmp, strlen(tmp) + 1);
    }
    return rtn;
}
