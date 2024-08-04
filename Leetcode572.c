/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool cmp(struct TreeNode* tree1, struct TreeNode* tree2) {
    if (tree1 == NULL && tree2 == NULL)
        return true;
    else if (tree1 == NULL || tree2 == NULL)
        return false;
    else {
        if (tree1->val != tree2->val)
            return false;
        else
            return cmp(tree1->left, tree2->left) && cmp(tree1->right, tree2->right);
    }
}

bool isSubtree(struct TreeNode* root, struct TreeNode* subRoot) {
    if (subRoot == NULL)
        return true;
    else if (root == NULL && subRoot != NULL)
        return false;

    if (cmp(root, subRoot))
        return true;
    else
        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
}