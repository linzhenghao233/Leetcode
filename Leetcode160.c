/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* getIntersectionNode(struct ListNode* headA, struct ListNode* headB) {
    struct ListNode* tempA = headA;
    struct ListNode* tempB = headB;
    struct ListNode* tempA_01;

    while (tempA != NULL) {
        tempB = headB;
        while (tempB != NULL) {
            if (tempB == tempA)
                return tempB;
            tempB = tempB->next;
        }
        tempA = tempA->next;
    }
    return NULL;
}