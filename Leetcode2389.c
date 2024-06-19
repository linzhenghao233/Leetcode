/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int cmp(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

int* answerQueries(int* nums, int numsSize, int* queries, int queriesSize, int* returnSize) {
    qsort(nums, numsSize, sizeof(int), cmp);

    for (int i = 1; i < numsSize; i++)
        nums[i] += nums[i - 1];

    for (int i = 0; i < queriesSize; i++) {
        int left = 0, right = numsSize - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] <= queries[i])
                left = mid + 1;
            else
                right = mid - 1;
        }
        queries[i] = left;
    }
    *returnSize = queriesSize;

    return queries;
}