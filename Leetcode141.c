/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode* head) {
    struct ListNode* fast, * slow;

    if (head == NULL)
        return false;

    fast = head->next;
    slow = head;

    while (fast != NULL && fast->next != NULL) {
        if (fast == slow)
            return true;
        fast = fast->next->next;
        slow = slow->next;
    }

    return false;
}