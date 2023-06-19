int uniquePathsWithObstacles(int** obstacleGrid, int obstacleGridSize, int* obstacleGridColSize) {
    int arr[101][101], count, i, j;

    if (obstacleGrid[0][0] == 1)
        return 0;

    for (i = 0; i < obstacleGridSize; i++) {
        for (j = 0; j < obstacleGridColSize[i]; j++) {
            if (obstacleGrid[i][j] == 1) {
                arr[i][j] = 0;
                continue;
            }

            if (i == 0 && j == 0)
                arr[i][j] = 1;
            else if (i == 0)
                arr[i][j] = arr[i][j - 1];
            else if (j == 0)
                arr[i][j] = arr[i - 1][j];
            else {
                arr[i][j] = arr[i][j - 1] + arr[i - 1][j];
            }
            count = arr[i][j];
        }
    }
    if (obstacleGrid[i - 1][j - 1] == 1)
        return 0;

    return count;
}