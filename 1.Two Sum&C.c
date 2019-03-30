/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) {
    int i,j,w;
    for(i=0;i<numsSize;++i)
    {
        w = target-nums[i];
        for(j=i+1;j<numsSize;++j)
        {
            if(nums[j]==w)
            {
                int *a = malloc(2*sizeof(int));
                a[0] = i;a[1] = j;
                return a;
            }
        }
    }
    return NULL;
}

//Runtime: 108 ms, faster than 64.99% of C online submissions for Two Sum.
//Memory Usage: 7.4 MB, less than 99.03% of C online submissions for Two Sum.
