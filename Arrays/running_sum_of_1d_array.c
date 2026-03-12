// Time Complexity: O(n)
// Space Complexity: O(1)
int* runningSum(int* nums, int numsSize, int* returnSize) {
    int *res,j=0;
    res=(int*)malloc(numsSize*sizeof(int));
    res[0]=nums[0];
    for(int i=1;i<numsSize;i++){
        res[i]=res[i-1]+nums[i];
        
    }
    *returnSize=numsSize;
    return res;
}