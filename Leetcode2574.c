/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* leftRightDifference(int* nums, int numsSize, int* returnSize) {
    int* result = (int*)malloc(numsSize * sizeof(int));
    result[0] = 0;

    for (int i = 1; i < numsSize; i++)
        result[i] = result[i - 1] + nums[i - 1];

    int cnt = 0;
    for (int i = numsSize - 1; i >= 0; i--) {
        result[i] = abs(cnt - result[i]);
        cnt += nums[i];
    }

    *returnSize = numsSize;
    return result;
}