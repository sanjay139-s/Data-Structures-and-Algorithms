// Time Complexity: O(n * m)
// Space Complexity: O(1)
int strStr(char* haystack, char* needle) {
    int i,m,j,n,c,res,k;
    n=strlen(haystack);
    m=strlen(needle);
    for(i=0;i<n-m+1;i++){
        k=i;
        c=0;
        for(j=0;j<m;j++){
            if(haystack[k]==needle[j]){
                k++;
                c++;
            }if(c==m ){
                return i;
            }
        }
    }
    return -1;
}