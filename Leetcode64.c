int minPathSum(int** grid, int gridSize, int* gridColSize) {
    int arr[201][201] = { 0 }, answer;
    arr[0][0] = grid[0][0];

    for (int i = 0; i < gridSize; i++) {
        for (int j = 0; j < gridColSize[i]; j++) {
            if (i == 0 && j > 0)
                arr[i][j] = arr[i][j - 1] + grid[i][j];
            else if (j == 0 && i > 0)
                arr[i][j] = arr[i - 1][j] + grid[i][j];
            else if (i > 0 && j > 0) {
                int min = arr[i - 1][j] < arr[i][j - 1] ? arr[i - 1][j] : arr[i][j - 1];
                arr[i][j] = min + grid[i][j];
            }
            answer = arr[i][j];
        }
    }
    return answer;
}