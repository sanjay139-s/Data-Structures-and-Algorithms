// Time Complexity: O(n^2)
// Space Complexity: O(1)

int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
    int i,count;
    int *res;
    res=(int*)malloc(numsSize*sizeof(int));
    for(i=0;i<numsSize;i++){
        count=0;
        for(int j=0;j<numsSize;j++){
            if(nums[i]>nums[j]){
                count++;
            
            }
        }
        res[i]=count;
        
    }
    *returnSize=numsSize;
    return res;
}