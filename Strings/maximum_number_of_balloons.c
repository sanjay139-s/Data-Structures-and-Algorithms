// Time Complexity: O(n)
// Space Complexity: O(1)
int maxNumberOfBalloons(char * text) {
    int b = 0, a = 0, l = 0, o = 0, n = 0;
    for (int i = 0; text[i] != '\0'; i++) {
        switch (text[i]) {
            case 'b': b++; break;
            case 'a': a++; break;
            case 'l': l++; break;
            case 'o': o++; break;
            case 'n': n++; break;
        }
    }
    l /= 2;
    o /= 2;

    int res = b;
    if (a < res) res = a;
    if (l < res) res = l;
    if (o < res) res = o;
    if (n < res) res = n;

    return res;
}