/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* resultsArray(int* nums, int numsSize, int k, int* returnSize) {
    *returnSize = numsSize - k + 1;
    if (k == 1)
        return nums;
    int* result = (int*)malloc((*returnSize) * sizeof(int));
    int count = 1;

    for (int i = 1; i < numsSize; i++) {
        if (nums[i] - 1 == nums[i - 1])
            count++;
        else
            count = 1;

        if (count >= k)
            result[i - k + 1] = nums[i];
        else if (i - k + 1 >= 0)
            result[i - k + 1] = -1;
    }

    return result;
}