/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode* left, * right;
    left = right = head;
    int index = 0;

    while (right->next != NULL) {
        if (index == n)
            left = left->next;
        else
            index++;
        right = right->next;
    }
    if (index == n - 1) {
        struct ListNode* temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    if (left != NULL && left->next != NULL)
        left->next = left->next->next;

    return head;
}