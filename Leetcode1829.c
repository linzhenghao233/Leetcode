/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getMaximumXor(int* nums, int numsSize, int maximumBit, int* returnSize) {
    int* result = (int*)malloc(numsSize * sizeof(int));
    int temp = 0;
    int max = (1 << maximumBit) - 1;
    *returnSize = numsSize;

    for (int i = 0; i < numsSize; i++)
        temp ^= nums[i];
    for (int i = 0; i < numsSize; i++) {
        result[i] = temp ^ max;
        temp ^= nums[numsSize - 1 - i];
    }

    return result;
}