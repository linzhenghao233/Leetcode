/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getSneakyNumbers(int* nums, int numsSize, int* returnSize) {
    int* result = (int*)malloc(2 * sizeof(int));
    int* hash = (int*)calloc(numsSize, sizeof(int));
    int index = 0;

    for (int i = 0; i < numsSize; i++) {
        hash[nums[i]]++;
        if (hash[nums[i]] == 2)
            result[index++] = nums[i];
        if (index == 2)
            break;
    }

    free(hash);
    *returnSize = index;
    return result;
}