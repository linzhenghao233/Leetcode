/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 /**
  * Note: The returned array must be malloced, assume caller calls free().
  */
void function(struct TreeNode* root, int* result, int* index) {
    if (root == NULL)
        return;

    result[(*index)++] = root->val;
    function(root->left, result, index);
    function(root->right, result, index);
}

int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    int* result = (int*)malloc(sizeof(int) * 100);
    *returnSize = 0;

    function(root, result, returnSize);

    return result;
}