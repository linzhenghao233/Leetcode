/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* transformArray(int* nums, int numsSize, int* returnSize) {
    int index = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] % 2 == 0)
            nums[index++] = 0;
    }
    while (index < numsSize) {
        nums[index++] = 1;
    }

    *returnSize = numsSize;
    return nums;
}