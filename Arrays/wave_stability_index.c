// Time Complexity: O(n)
// Space Complexity: O(1)
#include <stdio.h>

int waveStability(int arr[], int n) {
    int count = 0;

    for(int i = 1; i < n - 1; i++) {
        if((arr[i] > arr[i-1] && arr[i] > arr[i+1]) ||
           (arr[i] < arr[i-1] && arr[i] < arr[i+1])) {
            count++;
        }
    }

    return count;
}

int main() {
    int arr[] = {1, 3, 2, 4, 1};
    int n = 5;

    printf("%d", waveStability(arr, n));
    return 0;
}