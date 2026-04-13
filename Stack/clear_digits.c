// Time Complexity: O(n)
// Space Complexity: O(n)
char* clearDigits(char* s) {
    int n=strlen(s);
    char *res=(char *)malloc(10001);
    int top=-1;
    for(int i=0;s[i]!='\0';i++){
        if(!isdigit(s[i])){
            res[++top]=s[i];
        }else{
            if(top!=-1){
                top--;
            }
        }
    }
    res[top+1]='\0';
    return res;
}