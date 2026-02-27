// LeetCode: Three Consecutive Odds
// Difficulty: Easy
// Language: C
// Time Complexity: O(n)
// Space Complexity: O(1)
bool threeConsecutiveOdds(int* arr, int arrSize) {
    int i,count=0;
    for(i=0;i<arrSize;i++){
        if(arr[i]%2!=0){
            count++;
        }else{
            count=0;
        }
        if(count==3){
        return true;
    }
    }
        return false;
    }
