long long numberOfRightTriangles(int** grid, int gridSize, int* gridColSize) {
    int* col_sum = (int*)calloc(*gridColSize, sizeof(int));
    long long result = 0;

    for (int i = 0; i < *gridColSize; i++) {
        for (int j = 0; j < gridSize; j++)
            col_sum[i] += grid[j][i];
    }

    for (int i = 0; i < gridSize; i++) {
        int row_sum = -1;

        for (int j = 0; j < *gridColSize; j++)
            row_sum += grid[i][j];
        for (int j = 0; j < *gridColSize; j++) {
            if (grid[i][j] == 1)
                result += row_sum * (col_sum[j] - 1);
        }
    }

    free(col_sum);
    return result;
}