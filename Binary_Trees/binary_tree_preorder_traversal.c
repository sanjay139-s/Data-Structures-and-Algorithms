// Time Complexity: O(n)
// Space Complexity: O(n)
void helper(struct TreeNode* root, int* arr, int* index) {
    if(root == NULL) return;
    arr[(*index)++] = root->val;
    helper(root->left, arr, index);
    helper(root->right, arr, index);
}

int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    int* arr = (int*)malloc(1000 * sizeof(int));
    int index = 0;
    helper(root, arr, &index);
    *returnSize = index;
    return arr;
}