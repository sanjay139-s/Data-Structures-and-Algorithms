// Time Complexity: O(1)
// Space Complexity: O(1)
bool isPowerOfTwo(int n) {
    long value=1;
    if(n==0){
        return false;
    }
    while(value<n){
        value=value*2;
    }
        if(value==n){
            return true;
        }
    
    return false;
}
//-----------------------------------
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n > 0 && (n & (n - 1)) == 0)
        printf("Yes");
    else
        printf("No");

    return 0;
}