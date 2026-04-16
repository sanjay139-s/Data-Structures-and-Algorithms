// Time Complexity: O(n)
// Space Complexity: O(1)
int maxDepth(char* s) {
    int top=-1;
    char stack[1000001];
    int max=0,count=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='('){
            stack[++top]=s[i];
            count++;
            if(count>max){
                max=count;
            }
        }
        if(s[i]==')'){
            char a=stack[top--];
            count--;
        }
    }
    return max;
}