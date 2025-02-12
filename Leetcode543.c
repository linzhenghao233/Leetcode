/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int dfs(struct TreeNode* root, int* result) {
    if (!root)
        return -1;

    int l_len = dfs(root->left, result) + 1;
    int r_len = dfs(root->right, result) + 1;
    *result = fmax(*result, l_len + r_len);

    return fmax(l_len, r_len);
}

int diameterOfBinaryTree(struct TreeNode* root) {
    int result = 0;
    dfs(root, &result);

    return result;
}