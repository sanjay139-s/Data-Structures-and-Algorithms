// LeetCode 1450: Number of Students Doing Homework at a Given Time
// Difficulty: Easy
// Time Complexity: O(n)
// Space Complexity: O(1)
int busyStudent(int* startTime, int startTimeSize, int* endTime, int endTimeSize, int queryTime) {
    int i,count=0;
    for(i=0;i<endTimeSize;i++){
        if(endTime[i]>=queryTime){
            if(startTime[i]<=queryTime){
                count++;
            }
        }
    }
    return count;
}