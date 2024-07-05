/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** modifiedMatrix(int** matrix, int matrixSize, int* matrixColSize, int* returnSize, int** returnColumnSizes) {
    int** answer = (int**)malloc(matrixSize * sizeof(int*));
    int* max_col = (int*)calloc(*matrixColSize, sizeof(int));
    *returnColumnSizes = (int*)malloc(matrixSize * sizeof(int));

    for (int i = 0; i < matrixSize; i++) {
        answer[i] = (int*)malloc(matrixColSize[i] * sizeof(int));
        for (int j = 0; j < matrixColSize[i]; j++) {
            answer[i][j] = matrix[i][j];
        }
        (*returnColumnSizes)[i] = matrixColSize[i];
    }

    for (int i = 0; i < *matrixColSize; i++) {
        for (int j = 0; j < matrixSize; j++) {
            if (matrix[j][i] > max_col[i])
                max_col[i] = matrix[j][i];
        }
    }

    for (int i = 0; i < *matrixColSize; i++) {
        for (int j = 0; j < matrixSize; j++) {
            if (answer[j][i] == -1)
                answer[j][i] = max_col[i];
        }
    }

    *returnSize = matrixSize;
    free(max_col);
    return answer;
}