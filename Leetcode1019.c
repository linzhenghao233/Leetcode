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
int* nextLargerNodes(struct ListNode* head, int* returnSize) {
    int* result = (int*)calloc(10001, sizeof(int));
    *returnSize = 0;
    struct ListNode* tail = head;
    int max = head->val;

    while (tail != NULL) {
        while (head != NULL) {
            if (head->val > tail->val) {
                result[(*returnSize)++] = head->val;
                break;
            }
            head = head->next;
        }
        if (head == NULL)
            result[(*returnSize)++] = 0;
        tail = tail->next;
        head = tail;
    }

    return result;
}