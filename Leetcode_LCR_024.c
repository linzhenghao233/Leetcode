/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head) {
    if (head == NULL || head->next == NULL)
        return head;

    struct ListNode* node = head->next;
    struct ListNode* newHead = reverseList(node);
    node->next = head;
    head->next = NULL;

    return newHead;
}