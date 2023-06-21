int minFallingPathSum(int** matrix, int matrixSize, int* matrixColSize) {
    int min = 10001;

    if (matrixSize == 1)
        return matrix[0][0];

    for (int i = 1; i < matrixSize; i++) {
        for (int j = 0; j < matrixColSize[i]; j++) {
            if (j == 0) {
                int num = matrix[i - 1][j] <= matrix[i - 1][j + 1] ? matrix[i - 1][j] : matrix[i - 1][j + 1];
                matrix[i][j] += num;
            }
            else if (j == matrixColSize[i] - 1) {
                int num = matrix[i - 1][j - 1] <= matrix[i - 1][j] ? matrix[i - 1][j - 1] : matrix[i - 1][j];
                matrix[i][j] += num;
            }
            else {
                int num = matrix[i - 1][j + 1] <= matrix[i - 1][j] ? matrix[i - 1][j + 1] : matrix[i - 1][j];
                num = num < matrix[i - 1][j - 1] ? num : matrix[i - 1][j - 1];
                matrix[i][j] += num;
            }

            if (i == matrixSize - 1) {
                if (matrix[i][j] < min)
                    min = matrix[i][j];
            }
        }
    }
    return min;
}