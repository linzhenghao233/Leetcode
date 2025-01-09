bool inArea(int** grid, int r, int c, int row, int col) {
    return (0 <= r) && (r < row) && (0 <= c) && (c < col);
}

int area(int** grid, int r, int c, int row, int col) {
    if (!inArea(grid, r, c, row, col))
        return 0;
    if (grid[r][c] != 1)
        return 0;
    grid[r][c] = 2;

    return 1
        + area(grid, r - 1, c, row, col)
        + area(grid, r + 1, c, row, col)
        + area(grid, r, c - 1, row, col)
        + area(grid, r, c + 1, row, col);
}

int maxAreaOfIsland(int** grid, int gridSize, int* gridColSize) {
    int result = 0;

    for (int r = 0; r < gridSize; r++) {
        for (int c = 0; c < *gridColSize; c++) {
            if (grid[r][c] == 1) {
                int a = area(grid, r, c, gridSize, *gridColSize);
                result = a > result ? a : result;
            }
        }
    }

    return result;
}