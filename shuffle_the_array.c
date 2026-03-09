// Time Complexity: O(n)
// Space Complexity: O(n)
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    int* res = (int*)malloc(numsSize * sizeof(int));
    int p1 = 0;  
    int p2 = n;      
    int k = 0;     
    while(p1 < n){
        res[k++] = nums[p1++];
        res[k++] = nums[p2++];
    }
    *returnSize = numsSize;
    return res;
}
