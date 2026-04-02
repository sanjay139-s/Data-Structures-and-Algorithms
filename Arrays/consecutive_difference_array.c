// Time Complexity: O(n)
// Space Complexity: O(1)
#include <stdio.h>
void diffArray(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        printf("%d ", arr[i+1] - arr[i]);
    }
}
int main() {
    int arr[] = {5, 8, 12, 15};
    int n = 4;
    diffArray(arr, n);
    return 0;
}