/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int find(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

struct ListNode* insertGreatestCommonDivisors(struct ListNode* head) {
    struct ListNode* temp = head;

    while (temp && temp->next) {
        struct ListNode* new = (struct ListNode*)malloc(sizeof(struct ListNode));
        new->val = find(temp->val, temp->next->val);
        new->next = temp->next;
        temp->next = new;
        temp = new->next;
    }

    return head;
}