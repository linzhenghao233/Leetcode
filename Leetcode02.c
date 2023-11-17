/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* result = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* l3 = result;
    int total, num1, num2, num3, temp;
    temp = 0;

    while (l1 != NULL || l2 != NULL || temp != 0) {
        num1 = (l1 != NULL) ? l1->val : 0;
        num2 = (l2 != NULL) ? l2->val : 0;
        total = num1 + num2 + temp;
        temp = 0;

        if (total >= 10) {
            num3 = total % 10;
            temp = 1;
        }
        else
            num3 = total;

        l3->val = num3;

        if (l1 != NULL)l1 = l1->next;
        if (l2 != NULL)l2 = l2->next;
        if (l1 != NULL || l2 != NULL || temp != 0) {
            l3->next = (struct ListNode*)malloc(sizeof(struct ListNode));
            l3 = l3->next;
        }
    }
    l3->next = NULL;

    return result;
}