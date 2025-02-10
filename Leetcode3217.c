/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* modifiedList(int* nums, int numsSize, struct ListNode* head) {
    int hash[100001] = { 0 };
    struct ListNode* dummy = (struct ListNode*)malloc(sizeof(struct ListNode));
    dummy->next = head;
    struct ListNode* cur = dummy;

    for (int i = 0; i < numsSize; i++)
        hash[nums[i]] = 1;

    while (cur->next) {
        if (hash[cur->next->val])
            cur->next = cur->next->next;
        else
            cur = cur->next;
    }

    return dummy->next;
}