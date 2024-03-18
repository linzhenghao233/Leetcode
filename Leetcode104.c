/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxDepth(struct TreeNode* root) {
    if (root == NULL)
        return 0;

    int left_count = maxDepth(root->left);
    int right_count = maxDepth(root->right);

    return 1 + (left_count >= right_count ? left_count : right_count);
}