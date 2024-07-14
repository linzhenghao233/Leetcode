int maxIncreaseKeepingSkyline(int** grid, int gridSize, int* gridColSize) {
    int* row_max = (int*)calloc(gridSize, sizeof(int));
    int* col_max = (int*)calloc(*gridColSize, sizeof(int));
    int result = 0;

    for (int row = 0; row < gridSize; row++) {
        for (int col = 0; col < *gridColSize; col++) {
            if (grid[row][col] > row_max[row])
                row_max[row] = grid[row][col];
            if (grid[row][col] > col_max[col])
                col_max[col] = grid[row][col];
        }
    }

    for (int row = 0; row < gridSize; row++) {
        for (int col = 0; col < *gridColSize; col++) {
            int second_high = row_max[row] <= col_max[col] ? row_max[row] : col_max[col];
            if (grid[row][col] < second_high)
                result += second_high - grid[row][col];
        }
    }

    free(row_max);
    free(col_max);
    return result;
}