bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
    int high = 0, low = matrixSize - 1;
    int left = 0, right = *matrixColSize - 1;
    int row = -1, mid;

    while (high <= low) {
        mid = high + (low - high) / 2;

        if (matrix[mid][left] <= target && matrix[mid][right] >= target) {
            row = mid;
            break;
        }
        else if (matrix[mid][left] > target)
            low = mid - 1;
        else
            high = mid + 1;
    }

    if (row == -1)
        return false;

    while (left <= right) {
        mid = left + (right - left) / 2;

        if (matrix[row][mid] == target)
            return true;
        else if (matrix[row][mid] > target)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return false;
}