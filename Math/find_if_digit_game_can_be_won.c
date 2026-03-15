// Time Complexity: O(n)
// Space Complexity: O(1)
bool canAliceWin(int* nums, int numsSize) {
    int sum1=0,sum2=0;
    for(int i=0;i<numsSize;i++){
        
        if(nums[i]>=-9 && nums[i]<=9){
            sum1+=nums[i];
        }else{
            sum2+=nums[i];
        }
       
    }
     if(sum1==sum2){
            return 0;
        }else{
            return 1;
        }
}