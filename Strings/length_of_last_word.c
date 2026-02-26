int lengthOfLastWord(char* s) {
    int count=0;
    int a=strlen(s);
    a=a-1;
   while(a>=0 && s[a]==' '){
    a--;
   }
   while(a>=0 && s[a]!=' '){
    count++;
    a--;
   }
   return count;
}