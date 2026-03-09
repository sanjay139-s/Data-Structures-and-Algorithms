// Time Complexity: O(n * d)
// Space Complexity: O(1)
int findNumbers(int* nums, int numsSize) {
    int num;int even=0;
    for(int i=0;i<numsSize;i++){
        num=nums[i];
        int digit=0;
        if(num==0){return 0;}
        while(num>0){
            num=num/10;
            digit++;
        }
        
        if(digit%2==0){
            even++;
        }
    }
    return even;
}