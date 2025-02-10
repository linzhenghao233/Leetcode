/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode* dummy = (struct ListNode*)malloc(sizeof(struct ListNode));
    dummy->next = head;
    struct ListNode* cur = dummy;

    while (cur->next != NULL && cur->next->next != NULL) {
        if (cur->next->val == cur->next->next->val) {
            struct ListNode* temp = cur->next->next->next;
            int flag = cur->next->next->val;
            while (temp != NULL && temp->val == flag)
                temp = temp->next;
            cur->next = temp;
        }
        else
            cur = cur->next;
    }

    return dummy->next;
}