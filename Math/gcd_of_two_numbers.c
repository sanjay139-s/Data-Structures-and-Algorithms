// Time Complexity: O(log(min(a, b)))
// Space Complexity: O(1)
#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    printf("%d", a);
    return 0;
}