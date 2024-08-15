/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
    if (head == NULL || head->next == NULL)
        return head;

    struct ListNode* node1 = head;
    struct ListNode* node2 = head->next;
    struct ListNode* node3 = node2->next;

    node1->next = swapPairs(node3);
    node2->next = node1;

    return node2;
}