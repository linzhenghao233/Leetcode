/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 /**
  * Note: The returned array must be malloced, assume caller calls free().
  */
int* nodesBetweenCriticalPoints(struct ListNode* head, int* returnSize) {
    int left = INT_MAX;
    int mid = 0;
    int right = 0;
    int min = INT_MAX;
    int pre = head->val;
    int rear = 0;
    int index = 0;
    head = head->next;
    *returnSize = 2;
    int* result = (int*)malloc(2 * sizeof(int));
    result[0] = result[1] = -1;

    while (head != NULL && head->next != NULL) {
        index += 1;
        rear = head->next->val;
        if ((head->val > pre && head->val > rear) || (head->val < pre && head->val < rear)) {
            if (index < left)
                left = index;
            if (index > right) {
                mid = right;
                right = index;
                if (mid && (right - mid < min))
                    min = right - mid;
            }
        }
        pre = head->val;
        head = head->next;
    }

    if (!mid)
        return result;
    result[0] = min;
    result[1] = right - left;
    return result;
}