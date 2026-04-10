// Time Complexity: O(n)
// Space Complexity: O(n)
char* removeOuterParentheses(char* s) {
    char *res=(char *)malloc(10001);
    int j=0,bal=0;
    for(int i=0;s[i]!=0;i++){
        if(s[i]=='('){
            if(bal>0){
            res[j++]='(';
            }
            bal++;
        }else{
            bal--;
            if(bal>0){
                res[j++]=')';
            }
        }
    }
    res[j]='\0';
    return res;
}