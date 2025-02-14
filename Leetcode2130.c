/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int pairSum(struct ListNode* head) {
    struct ListNode* dummy = (struct ListNode*)malloc(sizeof(struct ListNode));
    dummy->next = head;
    struct ListNode* slow = dummy;
    struct ListNode* fast = dummy;

    while (fast) {
        slow = slow->next;
        if (fast->next)
            fast = fast->next->next;
        else
            break;
    }
    struct ListNode* cur = head;
    struct ListNode* prev = NULL;
    struct ListNode* next = NULL;

    while (cur != slow) {
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    int max = 0;
    while (slow) {
        int num = slow->val + prev->val;
        max = num > max ? num : max;
        slow = slow->next;
        prev = prev->next;
    }

    return max;
}