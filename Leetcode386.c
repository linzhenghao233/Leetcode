/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

void dfs(int start, int end, int* result, int* returnSize) {
    if (start > end)
        return;

    result[(*returnSize)++] = start;
    for (int i = 0; i <= 9; i++) {
        int next = start * 10 + i;
        if (next > end)
            return;
        dfs(next, end, result, returnSize);
    }
}

int* lexicalOrder(int n, int* returnSize) {
    int* result = (int*)malloc(n * sizeof(int));
    *returnSize = 0;

    for (int i = 1; i <= 9; i++) {
        dfs(i, n, result, returnSize);
    }

    return result;
}