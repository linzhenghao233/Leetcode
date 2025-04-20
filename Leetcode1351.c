int countNegatives(int** grid, int gridSize, int* gridColSize) {
    int result = 0;

    for (int row = gridSize - 1; row >= 0; row--) {
        if (grid[row][(*gridColSize) - 1] >= 0)
            break;
        for (int col = (*gridColSize) - 1; col >= 0; col--) {
            if (grid[row][col] < 0)
                result++;
            else
                break;
        }
    }

    return result;
}