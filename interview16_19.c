/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool inArea(int** land, int r, int c, int row, int col) {
    return r >= 0 && r < row&& c >= 0 && c < col;
}

int bfs(int** land, int r, int c, int row, int col) {
    if (!inArea(land, r, c, row, col))
        return 0;
    if (land[r][c] != 0)
        return 0;
    land[r][c] = 1;

    return 1
        + bfs(land, r - 1, c - 1, row, col)
        + bfs(land, r - 1, c, row, col)
        + bfs(land, r - 1, c + 1, row, col)
        + bfs(land, r, c - 1, row, col)
        + bfs(land, r, c + 1, row, col)
        + bfs(land, r + 1, c - 1, row, col)
        + bfs(land, r + 1, c, row, col)
        + bfs(land, r + 1, c + 1, row, col);
}

int cmp(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

int* pondSizes(int** land, int landSize, int* landColSize, int* returnSize) {
    int row = landSize;
    int col = *landColSize;
    int* result = (int*)malloc(row * col * sizeof(int));
    *returnSize = 0;

    for (int r = 0; r < row; r++) {
        for (int c = 0; c < col; c++) {
            if (land[r][c] == 0) {
                result[(*returnSize)] = bfs(land, r, c, row, col);
                (*returnSize)++;
            }
        }
    }

    qsort(result, *returnSize, sizeof(int), cmp);
    return result;
}