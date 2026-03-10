// Time Complexity: O(n)
// Space Complexity: O(n)
char* addBinary(char* a, char* b) {
    int i=strlen(a)-1;
    int j=strlen(b)-1;
    int carry=0;
    int max=(strlen(a)>strlen(b)?strlen(a):strlen(b))+2;
    int k=max-1;
    char *res=(char*)malloc(max*sizeof(char));
    res[k--]='\0';
    while(i>=0||j>=0||carry){
        int sum=carry;
         if(i >= 0)sum += a[i--]-'0';
        if(j >= 0)sum += b[j--] - '0';
        res[k--] = (sum % 2) + '0';
        carry = sum / 2;
    }
    return &res[k+1];
}