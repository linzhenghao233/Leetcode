/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* xorQueries(int* arr, int arrSize, int** queries, int queriesSize, int* queriesColSize, int* returnSize) {
    int* hash = (int*)malloc((arrSize + 1) * sizeof(int));
    int* result = (int*)malloc(queriesSize * sizeof(int));
    *returnSize = queriesSize;
    hash[0] = 0;

    for (int i = 0; i < arrSize; i++)
        hash[i + 1] = hash[i] ^ arr[i];

    for (int i = 0; i < queriesSize; i++) {
        result[i] = hash[queries[i][0]] ^ hash[queries[i][1] + 1];
    }

    free(hash);
    return result;
}