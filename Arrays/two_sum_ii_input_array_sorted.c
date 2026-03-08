// Time Complexity: O(n)
// Space Complexity: O(1)
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
        int i=0;
    int *size=(int*)malloc(2*sizeof(int));
    int j=numbersSize-1;
    while(i<j){
        int sum=0;
        sum=numbers[i]+numbers[j];
        if(sum==target){
            *returnSize=2;
            size[0]=i+1;
            size[1]=j+1;
            return size;
        }else if(sum>target){
            j--;

        }
        else{

            i++;
        }
    }
    return NULL;
}