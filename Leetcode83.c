/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    if (head == NULL)
        return head;

    struct ListNode* temp = head;

    while (temp->next != NULL) {
        if (temp->next->val == temp->val) {
            if (temp->next->next != NULL) {
                temp->next = temp->next->next;
                continue;
            }
            else {
                temp->next = NULL;
                break;
            }
        }
        temp = temp->next;
    }

    return head;
}