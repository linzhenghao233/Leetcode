/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* trainingPlan(struct ListNode* head, int cnt) {
    int diff = 0;
    struct ListNode* rear = head;

    while (head != NULL) {
        diff += 1;
        if (diff > cnt)
            rear = rear->next;
        head = head->next;
    }

    return rear;
}