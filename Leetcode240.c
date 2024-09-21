

bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
    int row = 0;
    int col = *matrixColSize - 1;

    while (row < matrixSize && col >= 0) {
        if (matrix[row][col] > target)
            col--;
        else if (matrix[row][col] < target)
            row++;
        else
            return true;
    }

    return false;
}