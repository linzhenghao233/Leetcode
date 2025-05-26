/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int numComponents(struct ListNode* head, int* nums, int numsSize) {
    int record[10001] = { 0 };
    int result = 0;

    for (int i = 0; i < numsSize; i++) {
        record[nums[i]]++;
    }

    while (head) {
        if (record[head->val]) {
            result++;
            while (head && record[head->val])
                head = head->next;
        }
        if (head)
            head = head->next;
    }

    return result;
}