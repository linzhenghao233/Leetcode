bool inArea(char** grid, int r, int c, int row, int col) {
    return (0 <= r) && (r < row) && (0 <= c) && (c < col);
}

void area(char** grid, int r, int c, int row, int col) {
    if (!inArea(grid, r, c, row, col))
        return;
    if (grid[r][c] != '1')
        return;
    grid[r][c] = '2';

    area(grid, r - 1, c, row, col);
    area(grid, r + 1, c, row, col);
    area(grid, r, c - 1, row, col);
    area(grid, r, c + 1, row, col);
}

int numIslands(char** grid, int gridSize, int* gridColSize) {
    int result = 0;

    for (int r = 0; r < gridSize; r++) {
        for (int c = 0; c < *gridColSize; c++) {
            if (grid[r][c] == '1') {
                area(grid, r, c, gridSize, *gridColSize);
                result += 1;
            }
        }
    }

    return result;
}