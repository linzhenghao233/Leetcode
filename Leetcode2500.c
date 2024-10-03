int cmp(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

int deleteGreatestValue(int** grid, int gridSize, int* gridColSize) {
    int result = 0;

    for (int i = 0; i < gridSize; i++)
        qsort(grid[i], *gridColSize, sizeof(int), cmp);

    for (int i = 0; i < *gridColSize; i++) {
        int temp = 0;

        for (int j = 0; j < gridSize; j++) {
            if (grid[j][i] > temp)
                temp = grid[j][i];
        }
        result += temp;
    }

    return result;
}