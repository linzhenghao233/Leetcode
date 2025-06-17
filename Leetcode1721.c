/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapNodes(struct ListNode* head, int k) {
    struct ListNode* slow = head;
    struct ListNode* fast = head;
    struct ListNode* node1 = NULL;
    struct ListNode* node2 = NULL;

    for (int i = 1; i < k; i++) {
        fast = fast->next;
    }
    node1 = fast;

    fast = fast->next;
    while (fast) {
        slow = slow->next;
        fast = fast->next;
    }
    node2 = slow;

    int temp = node1->val;
    node1->val = node2->val;
    node2->val = temp;

    return head;
}