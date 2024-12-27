/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* occurrencesOfElement(int* nums, int numsSize, int* queries, int queriesSize, int x, int* returnSize) {
    int cnt = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == x) {
            cnt += 1;
            nums[i] = -1;
            nums[cnt - 1] = i;
        }
        else
            nums[i] = -1;
    }

    for (int i = 0; i < queriesSize; i++) {
        if (queries[i] - 1 >= numsSize)
            queries[i] = -1;
        else
            queries[i] = nums[queries[i] - 1];
    }

    *returnSize = queriesSize;
    return queries;
}