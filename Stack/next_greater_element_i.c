
int* nextGreaterElement(int* nums1, int nums1Size,
                        int* nums2, int nums2Size,
                        int* returnSize) {

    int map[10001];
    for(int i = 0; i < 10001; i++) {
        map[i] = -1;
    }

    int stack[10001];
    int top = -1;

    for(int i = 0; i < nums2Size; i++) {

        while(top >= 0 && nums2[i] > stack[top]) {
            map[stack[top]] = nums2[i];
            top--;
        }

        stack[++top] = nums2[i];
    }

    int* res = (int*)malloc(nums1Size * sizeof(int));
    for(int i = 0; i < nums1Size; i++) {
        res[i] = map[nums1[i]];
    }
    *returnSize = nums1Size;
    return res;
}