/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getAverages(int* nums, int numsSize, int k, int* returnSize) {
    int* result = (int*)malloc(numsSize * sizeof(int));
    *returnSize = numsSize;
    long long window = 0;

    if (numsSize < 2 * k + 1) {
        for (int i = 0; i < numsSize; i++)
            result[i] = -1;
        return result;
    }

    for (int i = 0; i <= 2 * k; i++)
        window += nums[i];

    for (int i = 0; i < numsSize; i++) {
        if (i - k < 0 || i + k >= numsSize)
            result[i] = -1;
        else {
            result[i] = window / (2 * k + 1);
            if (i + k + 1 < numsSize && i - k >= 0) {
                window += nums[i + k + 1] - nums[i - k];
            }
        }
    }
    return result;
}