#include <stdio.h>
#include <limits.h>
int minDistance(int arr[], int n) {
    int min = INT_MAX;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                if(j - i < min) {
                    min = j - i;
                }
            }
        }
    }

    if(min == INT_MAX) return -1;
    return min;
}
int main() {
    int arr[] = {7, 1, 3, 4, 1, 7};
    int n = 6;

    printf("%d", minDistance(arr, n));
    return 0;
}