/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    int* hash = (int*)calloc(numsSize, sizeof(int));
    *returnSize = 0;

    for (int i = 0; i < numsSize; i++)
        hash[nums[i] - 1]++;
    for (int i = 0; i < numsSize; i++) {
        if (hash[i] == 0) {
            hash[*returnSize] = i + 1;
            (*returnSize)++;
        }
    }

    return hash;
}