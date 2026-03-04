// LeetCode 66: Plus One
// Difficulty: Easy
// Time Complexity: O(n)
// Space Complexity: O(1)
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int *res;
    for(int i=digitsSize-1;i>=0;i--){
        if(digits[i]<9){
            digits[i]++;
            *returnSize=digitsSize;
            return digits;
        }
        digits[i]=0;
    }
        res=(int*)malloc((digitsSize+1)*sizeof(int));
        res[0]=1;
        for(int i=1;i<=digitsSize;i++){
            res[i]=0;
        }
    *returnSize= digitsSize+1;
    return res;
}