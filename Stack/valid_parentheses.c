// Time Complexity: O(n)
// Space Complexity: O(n)
bool isValid(char* s) {
    char stack[10000];
    int top = -1;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            stack[++top] = s[i];
        }
        else {
            if (top == -1) return false;
            char a = stack[top--]; 
            if ((s[i] == ')' && a != '(') ||
                (s[i] == '}' && a != '{') ||
                (s[i] == ']' && a != '[')) {
                return false;
            }
        }
    }
    return (top == -1);
}