/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getRow(int rowIndex, int* returnSize) {
    int* result = (int*)malloc((rowIndex + 1) * sizeof(int));

    for (int row = 0; row <= rowIndex; row++) {
        for (int col = row; col >= 0; col--) {
            if (col == 0 || col == row)
                result[col] = 1;
            else
                result[col] = result[col] + result[col - 1];
        }
    }
    *returnSize = rowIndex + 1;

    return result;
}