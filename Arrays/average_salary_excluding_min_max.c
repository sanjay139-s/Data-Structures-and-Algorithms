// LeetCode 1491: Average Salary Excluding the Minimum and Maximum Salary
// Difficulty: Easy
// Time Complexity: O(n)
// Space Complexity: O(1)
double average(int* salary, int salarySize) {
    int i,sum=0,count;
    for(i=0;i<salarySize;i++){
        sum+=salary[i];
    }
    int min=salary[0];
    for(i=0;i<salarySize;i++){
        if(salary[i]<min){
            min=salary[i];
        }
    }
    int max=salary[0];
    for(i=0;i<salarySize;i++){
        if(salary[i]>max){
            max=salary[i];
        }
    }
    int sum1=min+max;
    double total=sum-sum1;
    int a=salarySize-2;
    double res=total/a;
    return res;
}