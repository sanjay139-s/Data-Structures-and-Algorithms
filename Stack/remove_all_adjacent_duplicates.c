// Time Complexity: O(n)
// Space Complexity: O(n)
char* removeDuplicates(char* s) {
    char *res=(char *)malloc((strlen(s) + 1) * sizeof(char));
    int top=-1;
    
    for(int i=0;s[i]!='\0';i++){
        if(  top!=-1 && s[i]==res[top]){
            top--;
        }else{
            res[++top]=s[i];
        }
    }
    res[top+1]='\0';
    return res;
}