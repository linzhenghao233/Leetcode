/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 /**
  * Note: The returned array must be malloced, assume caller calls free().
  */
int* reverseBookList(struct ListNode* head, int* returnSize) {
    if (head == NULL) {
        *returnSize = 0;
        return (int*)malloc(10000 * sizeof(int));
    }

    int* result = reverseBookList(head->next, returnSize);
    result[(*returnSize)++] = head->val;

    return result;
}