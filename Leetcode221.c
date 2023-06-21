int maximalSquare(char** matrix, int matrixSize, int* matrixColSize) {
    int** arr = (int**)malloc(matrixSize * sizeof(int*));
    int max = 0, status = 0;

    for (int i = 0; i < matrixSize; i++) {
        arr[i] = (int*)malloc(matrixColSize[i] * sizeof(int));
        for (int j = 0; j < matrixColSize[i]; j++) {
            arr[i][j] = matrix[i][j] - '0';
            if (i == 0 || j == 0) {
                if (arr[i][j] > status)
                    status = 1;
                continue;
            }
            if (arr[i][j] == 0)
                continue;

            arr[i][j] = fmin(arr[i - 1][j - 1], fmin(arr[i][j - 1], arr[i - 1][j])) + 1;
            if (arr[i][j] > max)
                max = arr[i][j];
        }
    }
    if (max == 0)
        max = status;
    return max * max;
}