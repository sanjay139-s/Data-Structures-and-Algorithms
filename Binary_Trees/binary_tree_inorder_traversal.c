// Time Complexity: O(n)
// Space Complexity: O(n)
void inorder(struct TreeNode* root, int *res, int *index){
    if(root == NULL)
        return;
    inorder(root->left, res, index);
    res[*index] = root->val;
    (*index)++;

    inorder(root->right, res, index);
}

int* inorderTraversal(struct TreeNode* root, int* returnSize) {

    int *res = (int*)malloc(100 * sizeof(int));
    int index =0;
    inorder(root, res, &index);
    *returnSize = index;
    return res;
}