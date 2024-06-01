/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallestSubarrays(int* nums, int numsSize, int* returnSize) {
    int* result = (int*)calloc(numsSize, sizeof(int));
    int* hash = (int*)malloc(32 * sizeof(int));
    memset(hash, -1, sizeof(hash));

    for (int i = numsSize - 1; i >= 0; i--) {
        for (int bit = 0; bit < 32; bit++) {
            if (nums[i] & (1U << bit))
                hash[bit] = i;
        }

        int max = i;
        for (int bit = 0; bit < 32; bit++) {
            if (hash[bit] > max)
                max = hash[bit];
        }
        result[i] = max - i + 1;
    }

    *returnSize = numsSize;
    free(hash);
    return result;
}