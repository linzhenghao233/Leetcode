/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
void dfs(struct TreeNode* root, int* result, int* pre) {
    if (!root)
        return;
    dfs(root->left, result, pre);
    *result = fmin(*result, root->val - *pre);
    *pre = root->val;
    dfs(root->right, result, pre);
}

int getMinimumDifference(struct TreeNode* root) {
    int result = INT_MAX;
    int pre = INT_MIN / 2;
    dfs(root, &result, &pre);

    return result;
}