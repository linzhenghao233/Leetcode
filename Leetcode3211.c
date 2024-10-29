/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void dfs(char* arr, int i, int n, char** result, int* returnSize) {
    if (i == n) {
        result[*returnSize] = strdup(arr);
        (*returnSize)++;
        return;
    }

    arr[i] = '1';
    dfs(arr, i + 1, n, result, returnSize);

    if (i == 0 || arr[i - 1] == '1') {
        arr[i] = '0';
        dfs(arr, i + 1, n, result, returnSize);
    }
}

char** validStrings(int n, int* returnSize) {
    char** result = (char**)malloc((1 << n) * sizeof(char*));
    char* arr = (char*)calloc(n + 1, sizeof(char));
    *returnSize = 0;

    dfs(arr, 0, n, result, returnSize);

    free(arr);
    return result;
}