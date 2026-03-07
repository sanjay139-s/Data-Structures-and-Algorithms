// Time Complexity: O(n)
// Space Complexity: O(1)
bool detectCapitalUse(char* word) {
    int i,j=0;
    int vc=0;
    int n=strlen(word);
    
    for(i=0;word[i]!='\0';i++){
        if(word[i]>=65 && word[i]<=90){
            vc++;
        }

    }
    if(vc==n || vc==0){
        return 1;
    }
    if(vc==1){
        if(word[0]>=65 && word[0]<=90){
            return 1;
        }
    }
    return 0;
}