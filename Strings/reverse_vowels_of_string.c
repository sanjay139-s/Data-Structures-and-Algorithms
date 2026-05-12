// Time Complexity: O(n)
// Space Complexity: O(1)
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int isVowel(char ch){
    ch = tolower(ch);
    return (ch=='a' || ch=='e' || ch=='i' ||
            ch=='o' || ch=='u');
}

char* reverseVowels(char* s) {
    int i = 0;
    int j = strlen(s)-1;
    while(i < j){
        while(i < j && !isVowel(s[i]))
            i++;
        while(i < j && !isVowel(s[j]))
            j--;
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
    return s;
}