/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize) {
    int* result = (int*)malloc(numsSize * sizeof(int));
    int index = 0;

    for (int i = 0; i < n; i++) {
        result[index++] = nums[i];
        result[index++] = nums[i + n];
    }

    *returnSize = numsSize;
    return result;
}