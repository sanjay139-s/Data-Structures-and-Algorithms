// LeetCode 1431: Kids With the Greatest Number of Candies
// Difficulty: Easy
// Time Complexity: O(n)
// Space Complexity: O(1)
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    bool *res;
    res=(bool*)malloc(candiesSize*sizeof(bool));
    int i,j,count,s;
    for(i=0;i<candiesSize;i++){
        s=0;
        s=candies[i]+extraCandies;
        count=0;
        for(j=0;j<candiesSize;j++){
            if(s>=candies[j]){
                count++;
            }
        }
        if(count==candiesSize){
            res[i]=true;
        }else{
        res[i]=false;
        }
    }
    *returnSize=candiesSize;
    return res;
}