/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getFinalState(int* nums, int numsSize, int k, int multiplier, int* returnSize) {
    for (int i = 0; i < k; i++) {
        int index = 0;
        for (int j = 0; j < numsSize; j++)
            index = nums[index] > nums[j] ? j : index;
        nums[index] *= multiplier;
    }
    *returnSize = numsSize;

    return nums;
}