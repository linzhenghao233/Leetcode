/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** divideString(char* s, int k, char fill, int* returnSize) {
    int len = strlen(s);
    int n = (len + k - 1) / k;
    char** result = (char**)malloc(n * sizeof(char*));
    *returnSize = n;

    for (int i = 0; i < n; i++) {
        result[i] = (char*)malloc((k + 1) * sizeof(char));
        int start = i * k;

        int j;
        for (j = 0; j < k && start + j < len; j++) {
            result[i][j] = s[start + j];
        }
        while (j < k) {
            result[i][j] = fill;
            j++;
        }
        result[i][k] = '\0';
    }

    return result;
}