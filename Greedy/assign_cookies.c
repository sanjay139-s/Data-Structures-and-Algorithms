// Time Complexity: O(n log n)
// Space Complexity: O(1)
int compare(const void *a, const void *b){
    return (*(int*)a - *(int*)b);
}
int findContentChildren(int* g, int gSize, int* s, int sSize) {
    int count=0;
    qsort(g, gSize, sizeof(int), compare);
    qsort(s, sSize, sizeof(int), compare);
    int j = sSize - 1;   
    for(int i = gSize - 1; i >= 0; i--){  
        if(j >= 0 && s[j] >= g[i]){
            count++;
            j--;   
        }
    }
    return count;
}