/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeInBetween(struct ListNode* list1, int a, int b, struct ListNode* list2) {
    struct ListNode* cur = list1;
    struct ListNode* left1 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* right1 = (struct ListNode*)malloc(sizeof(struct ListNode));
    int index = 0;

    while (cur) {
        if (index == a - 1)
            left1 = cur;
        if (index == b + 1) {
            right1 = cur;
            break;
        }
        index++;
        cur = cur->next;
    }
    left1->next = list2;
    while (list2->next)
        list2 = list2->next;
    list2->next = right1;

    return list1;
}