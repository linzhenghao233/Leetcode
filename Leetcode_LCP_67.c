/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


struct TreeNode* expandBinaryTree(struct TreeNode* root) {
    if (root && root->left) {
        struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
        newNode->val = -1;
        newNode->left = root->left;
        newNode->right = NULL;
        root->left = newNode;
        expandBinaryTree(newNode->left);
    }
    if (root && root->right) {
        struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
        newNode->val = -1;
        newNode->left = NULL;
        newNode->right = root->right;
        root->right = newNode;
        expandBinaryTree(newNode->right);
    }

    return root;
}