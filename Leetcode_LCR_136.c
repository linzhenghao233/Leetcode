/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteNode(struct ListNode* head, int val) {
    struct ListNode* new = head;

    if (head != NULL && head->val == val)
        return head->next;

    while (new->next != NULL) {
        if (new->next->val == val) {
            new->next = new->next->next;
            break;
        }
        new = new->next;
    }

    return head;
}