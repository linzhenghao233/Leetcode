/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */

int cmp(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

int** divideArray(int* nums, int numsSize, int k, int* returnSize, int** returnColumnSizes) {
    qsort(nums, numsSize, sizeof(int), cmp);
    *returnSize = 0;

    for (int i = 2; i < numsSize; i += 3) {
        if (nums[i] - nums[i - 2] > k) {
            *returnColumnSizes = NULL;
            return NULL;
        }

    }

    int** result = (int**)malloc(numsSize / 3 * sizeof(int*));
    *returnColumnSizes = (int*)malloc(numsSize / 3 * sizeof(int));
    for (int i = 0; i < numsSize; i += 3) {
        result[*returnSize] = (int*)malloc(3 * sizeof(int));
        (*returnColumnSizes)[*returnSize] = 3;
        memcpy(result[(*returnSize)++], &nums[i], 3 * sizeof(int));
    }

    return result;
}