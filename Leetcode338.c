/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int n, int* returnSize) {
    *returnSize = n + 1;
    int* result = (int*)calloc(*returnSize, sizeof(int));

    for (int i = 1; i <= n; i++)
        result[i] = result[i >> 1] + (i & 1);

    return result;
}