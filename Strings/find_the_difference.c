// Time Complexity: O(n)
// Space Complexity: O(1)
char findTheDifference(char * s, char * t) {
    char result = 0;

    while(*s) {
        result ^= *s;
        s++;
    }

    while(*t) {
        result ^= *t;
        t++;
    }

    return result;
}