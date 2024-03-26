/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int function(struct TreeNode* root, bool flag) {
    if (root == NULL)
        return 0;

    if (root->left == NULL && root->right == NULL && flag)
        return root->val;

    int left_count = function(root->left, true);
    int right_count = function(root->right, false);

    return left_count + right_count;
}

int sumOfLeftLeaves(struct TreeNode* root) {
    return function(root, false);
}