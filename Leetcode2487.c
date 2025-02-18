/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNodes(struct ListNode* head) {
    if (head->next == NULL)
        return head;

    struct ListNode* node = removeNodes(head->next);
    if (node->val > head->val)
        return node;

    head->next = node;
    return head;
}