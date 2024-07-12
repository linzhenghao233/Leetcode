/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int cmp(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

int* numberGame(int* nums, int numsSize, int* returnSize) {
    qsort(nums, numsSize, sizeof(int), cmp);
    *returnSize = numsSize;
    int* result = (int*)malloc(numsSize * sizeof(int));

    for (int i = 1; i < numsSize; i += 2) {
        result[i - 1] = nums[i];
        result[i] = nums[i - 1];
    }

    return result;
}