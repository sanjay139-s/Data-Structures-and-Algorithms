char* firstPalindrome(char** words, int wordsSize) {
for(int i=0 ;i<wordsSize; i++){
    int left=0;
    int count=1;
    int right=strlen(words[i])-1;
   
    while(left<right){
        if(words[i][left]!=words[i][right]){
            
            count=0;
            break;
        }
        else{
            left++;
            right--;
            
        }
    }if(count==1){
    return words[i];
    }
}
return "";
}