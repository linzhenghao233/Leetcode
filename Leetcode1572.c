int diagonalSum(int** mat, int matSize, int* matColSize) {
    int result = 0;

    for (int i = 0; i < matSize; i++) {
        for (int j = 0; j < matSize; j++) {
            if (i == j || i + j == matSize - 1)
                result += mat[i][j];
        }
    }

    return result;
}