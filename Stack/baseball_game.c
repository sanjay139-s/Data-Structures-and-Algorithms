int calPoints(char** operations, int operationsSize) {
    int top=-1;
    int record[operationsSize];
    for(int i=0;i<operationsSize;i++){
        if(strcmp(operations[i], "D") == 0){
            
            int b=record[top];
            record[++top]=2*b;

        }else if(strcmp(operations[i], "C") == 0){
        if(top!=-1){
            top--;
        }
        }else if (strcmp(operations[i], "+") == 0){
            int a=record[top];
            int b=record[top-1];
            record[++top]=a+b;
        }else{
           record[++top] = atoi(operations[i]);
        }
    }
    int sum=0;
    for(int i=0;i<=top;i++){
        sum+=record[i];
    }
    return sum;
}