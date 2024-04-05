/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {
    if (head->next == NULL)
        return true;

    struct ListNode* slow, * fast;
    slow = fast = head;
    int count = 0;

    while (fast != NULL && fast->next != NULL) {
        count++;
        slow = slow->next;
        fast = fast->next->next;
    }

    struct ListNode* prev = NULL, * curr = slow, * next_node;
    while (curr != NULL) {
        next_node = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next_node;
    }

    struct ListNode* temp = head;
    while (prev != NULL) {
        if (prev->val != temp->val)
            return false;
        prev = prev->next;
        temp = temp->next;
    }

    return true;
}