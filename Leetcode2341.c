/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* numberOfPairs(int* nums, int numsSize, int* returnSize) {
    int* result = (int*)calloc(2, sizeof(int));
    *returnSize = 2;
    int cnt[101] = { 0 };

    for (int i = 0; i < numsSize; i++) {
        cnt[nums[i]]++;
    }
    for (int i = 0; i < 101; i++) {
        result[0] += cnt[i] >> 1;
        result[1] += cnt[i] % 2;
    }

    return result;
}