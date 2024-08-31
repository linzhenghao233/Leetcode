bool canMakeSquare(char** grid, int gridSize, int* gridColSize) {
    for (int row = 0; row < gridSize; row++) {
        for (int col = 0; col < *gridColSize; col++) {
            int B = 0;
            int W = 0;
            if (row + 1 < gridSize && col + 1 < *gridColSize) {
                if (grid[row][col] == 'B')
                    B++;
                else
                    W++;
                if (grid[row + 1][col] == 'B')
                    B++;
                else
                    W++;
                if (grid[row][col + 1] == 'B')
                    B++;
                else
                    W++;
                if (grid[row + 1][col + 1] == 'B')
                    B++;
                else
                    W++;

                if (B > 2 || W > 2)
                    return true;
            }
        }
    }

    return false;
}