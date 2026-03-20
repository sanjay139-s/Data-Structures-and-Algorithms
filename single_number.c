// Time Complexity: O(n)
// Space Complexity: O(1)
int singleNumber(int* nums, int numsSize) {
    int count=0;
    for(int i=0;i<numsSize;i++){
       count^=nums[i];
    }
    return count;
}