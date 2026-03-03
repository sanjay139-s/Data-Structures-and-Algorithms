// LeetCode 27: Remove Element
// Difficulty: Easy
// Time Complexity: O(n)
// Space Complexity: O(1)
int removeElement(int* nums, int numsSize, int val) {
    int i;
    int j=0,c=0;
    for(i=0;i<numsSize;i++){
        if(nums[i]!=val){
            nums[j]=nums[i];
            j++;
        
        }
    }
    return j;
}