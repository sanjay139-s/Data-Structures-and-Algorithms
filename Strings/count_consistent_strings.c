int countConsistentStrings(char * allowed, char ** words, int wordsSize){
    int isAllowed[26] = {0};
    
    for (int i = 0; allowed[i] != '\0'; i++) {
        isAllowed[allowed[i] - 'a'] = 1;
    }
    
    int consistentCount = 0;
    
    for (int i = 0; i < wordsSize; i++) {
        char *word = words[i];
        int isConsistent = 1;
        
        for (int j = 0; word[j] != '\0'; j++) {
            if (isAllowed[word[j] - 'a'] == 0) {
                isConsistent = 0;
                break;
            }
        }
        
        if (isConsistent) {
            consistentCount++;
        }
    }
    
    return consistentCount;
}