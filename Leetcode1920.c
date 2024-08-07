/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* buildArray(int* nums, int numsSize, int* returnSize) {
    for (int i = 0; i < numsSize; i++)
        nums[i] += (nums[nums[i]] % 1000) * 1000;

    for (int i = 0; i < numsSize; i++)
        nums[i] = nums[i] / 1000;

    *returnSize = numsSize;
    return nums;
}


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* buildArray(int* nums, int numsSize, int* returnSize) {
    int* result = (int*)malloc(numsSize * sizeof(int));

    for (int i = 0; i < numsSize; i++)
        result[i] = nums[nums[i]];

    *returnSize = numsSize;
    return result;
}