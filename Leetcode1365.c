/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
    int* hash = (int*)calloc(102, sizeof(int));
    int* result = (int*)malloc(numsSize * sizeof(int));

    for (int i = 0; i < numsSize; i++)
        hash[nums[i] + 1]++;
    for (int i = 1; i < 102; i++)
        hash[i] += hash[i - 1];
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == 0)
            result[i] = 0;
        else
            result[i] = hash[nums[i]];
    }

    *returnSize = numsSize;
    free(hash);
    return result;
}