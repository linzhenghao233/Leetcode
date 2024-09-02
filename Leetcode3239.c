int minFlips(int** grid, int gridSize, int* gridColSize) {
    int row, col;
    row = col = 0;

    for (int i = 0; i < gridSize; i++) {
        int left = 0;
        int right = *gridColSize - 1;
        while (left < right) {
            if (grid[i][left] != grid[i][right])
                row++;
            left++;
            right--;
        }
    }

    for (int i = 0; i < *gridColSize; i++) {
        int top = 0;
        int bottom = gridSize - 1;
        while (top < bottom) {
            if (grid[top][i] != grid[bottom][i])
                col++;
            top++;
            bottom--;
        }
    }

    return row < col ? row : col;
}