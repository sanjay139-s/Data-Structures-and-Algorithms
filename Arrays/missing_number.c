// Time Complexity: O(n)
// Space Complexity: O(1)
int missingNumber(int* nums, int numsSize) {
   int i,count=0;
    for(i=0;i<numsSize;i++) count+=nums[i];
    
    int a=i*(i+1)/2;
    int b=a-count;
    return b;
}