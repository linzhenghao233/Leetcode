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

void func(struct TreeNode* node, int* result, int* index) {
    if (node == NULL)
        return;

    func(node->left, result, index);
    func(node->right, result, index);
    result[(*index)++] = node->val;
}

int* postorderTraversal(struct TreeNode* root, int* returnSize) {
    int* result = (int*)malloc(100 * sizeof(int));
    *returnSize = 0;

    func(root, result, returnSize);

    return result;
}