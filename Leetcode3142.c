bool satisfiesConditions(int** grid, int gridSize, int* gridColSize) {
    for (int i = 1; i < *gridColSize; i++) {
        if (grid[0][i - 1] == grid[0][i])
            return false;
    }

    for (int i = 0; i < *gridColSize; i++) {
        for (int j = 1; j < gridSize; j++) {
            if (grid[j - 1][i] != grid[j][i])
                return false;
        }
    }

    return true;
}