// Time Complexity: O(n)
// Space Complexity: O(1)
#include <stdlib.h>

int evenOddDifference(int* arr, int n) {
    int evenSum = 0;
    int oddSum = 0;

    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) {
            evenSum += arr[i];
        } else {
            oddSum += arr[i];
        }
    }

    return abs(evenSum - oddSum);
}