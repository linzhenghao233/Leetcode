/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* rowAndMaximumOnes(int** mat, int matSize, int* matColSize, int* returnSize) {
    int* result = (int*)malloc(2 * sizeof(int));
    result[0] = result[1] = 0;

    for (int i = 0; i < matSize; i++) {
        int count = 0;
        for (int j = 0; j < matColSize[i]; j++) {
            if (mat[i][j])
                count++;
        }
        if (count > result[1]) {
            result[0] = i;
            result[1] = count;
        }
    }

    *returnSize = 2;
    return result;
}