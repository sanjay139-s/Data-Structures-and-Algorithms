int value(char c) {
    if(c == 'I') return 1;
    if(c == 'V') return 5;
    if(c == 'X') return 10;
    if(c == 'L') return 50;
    if(c == 'C') return 100;
    if(c == 'D') return 500;
    if(c == 'M') return 1000;
    return 0;
}
int romanToInt(char* s) {
    int n = strlen(s);
    int sum = 0;
    int prev = 0;
    for(int i = n - 1; i >= 0; i--) {
        int curr = value(s[i]);
        if(curr < prev) {
            sum -= curr;
        } else {
            sum += curr; 
        }
        prev = curr;
    }
    return sum;
}