/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    ListNode* left = head, right = head;
    int index = 1;

    while (right->next != NULL) {
        if (index == n) {

            index = 1;
        }
        index++;
    }
}