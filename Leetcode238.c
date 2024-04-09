/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    int* left = (int*)malloc(numsSize * sizeof(int));
    int* right = (int*)malloc(numsSize * sizeof(int));
    int* result = (int*)malloc(numsSize * sizeof(int));
    int num = 1;

    for (int i = 0; i < numsSize; i++) {
        num *= nums[i];
        left[i] = num;
    }
    num = 1;
    for (int i = numsSize - 1; i >= 0; i--) {
        num *= nums[i];
        right[i] = num;
    }
    for (int i = 0; i < numsSize; i++) {
        if (i == 0)
            result[i] = right[i + 1];
        else if (i == numsSize - 1)
            result[i] = left[i - 1];
        else
            result[i] = left[i - 1] * right[i + 1];
    }
    free(left);
    free(right);
    *returnSize = numsSize;
    return result;
}