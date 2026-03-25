// Time Complexity: O(log^2 n)
// Space Complexity: O(log n)
 int leftHeight(struct TreeNode* root) {
    int h = 0;
    while (root) {
        h++;
        root = root->left;
    }
    return h;
}

int rightHeight(struct TreeNode* root) {
    int h = 0;
    while (root) {
        h++;
        root = root->right;
    }
    return h;
}
int countNodes(struct TreeNode* root) {
    if (root == NULL) return 0;

    int lh = leftHeight(root);
    int rh = rightHeight(root);
    if(lh==rh){
        int nodes = 1;
    for(int i = 0; i < lh; i++)
        nodes = nodes * 2;

        return nodes - 1;
    }
    return 1 + countNodes(root->left) + countNodes(root->right);
}