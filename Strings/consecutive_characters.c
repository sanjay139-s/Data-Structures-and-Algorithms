int maxPower(char* s) {
    int count =1;
    int max=1;
    for(int i=1;s[i]!='\0';i++){
        if(s[i]==s[i-1]){
            count++;
        }
        else{
        count=1;
        }

        if(count>max){
            max=count;
        }
    }
    return max;
}