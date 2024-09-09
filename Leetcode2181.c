/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeNodes(struct ListNode* head) {
    int sum = 0;
    struct ListNode* result = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* newHead = result;
    head = head->next;

    while (head) {
        if (head->val == 0) {
            struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
            newNode->val = sum;
            newHead->next = newNode;
            newHead = newHead->next;
            sum = 0;
        }
        else
            sum += head->val;
        head = head->next;
    }
    newHead->next = NULL;

    return result->next;
}