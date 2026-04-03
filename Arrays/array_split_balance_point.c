#include <stdio.h>
int balancePoint(int arr[], int n) {
    int total = 0;
    for(int i = 0; i < n; i++) {
        total += arr[i];
    }
    int leftSum = 0;
    for(int i = 0; i < n; i++) {
        total -= arr[i];
        if(leftSum == total) {
            return i;
        }

        leftSum += arr[i];
    }
    return -1;
}
int main() {
    int arr[] = {1, 2, 3, 3};
    int n = 4;

    printf("%d", balancePoint(arr, n));
    return 0;
}