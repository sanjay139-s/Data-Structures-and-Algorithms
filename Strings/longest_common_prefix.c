// LeetCode 14: Longest Common Prefix
// Difficulty: Easy
// Time Complexity: O(n * m)
// Space Complexity: O(1)
char* longestCommonPrefix(char** strs, int strsSize) {
     if (strsSize == 0) 
        return "";
    int len = strlen(strs[0]);
    for (int i = 0; i < len; i++) {
        char c = strs[0][i];
        for (int j = 1; j < strsSize; j++) {
            if (i >= strlen(strs[j]) || strs[j][i] != c) {   
                strs[0][i] = '\0';
                return strs[0];
            }
        }
    }
    return strs[0];

}