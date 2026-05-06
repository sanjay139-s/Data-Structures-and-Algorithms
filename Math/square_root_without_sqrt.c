// Time Complexity: O(√n)
// Space Complexity: O(1)
#include <stdio.h>

int main() {
    int num, i = 1;

    scanf("%d", &num);

    while(i * i <= num) {
        i++;
    }

    printf("%d", i - 1);

    return 0;
}