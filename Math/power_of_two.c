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