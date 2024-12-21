/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int K;

int cmp(const void* a, const void* b) {
    return (*(int**)b)[K] - (*(int**)a)[K];
}

int** sortTheStudents(int** score, int scoreSize, int* scoreColSize, int k, int* returnSize, int** returnColumnSizes) {
    K = k;
    qsort(score, scoreSize, sizeof(int*), cmp);
    *returnSize = scoreSize;
    *returnColumnSizes = scoreColSize;

    return score;
}