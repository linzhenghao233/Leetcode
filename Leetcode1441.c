/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** buildArray(int* target, int targetSize, int n, int* returnSize) {
    char** result = (char**)malloc(n * 2 * sizeof(char*));
    *returnSize = 0;
    int index = 0;

    for (int i = 1; i <= n && index < targetSize; i++) {
        result[(*returnSize)] = (char*)malloc(5 * sizeof(char));
        result[(*returnSize)++] = "Push";
        if (i != target[index]) {
            result[(*returnSize)] = (char*)malloc(4 * sizeof(char));
            result[(*returnSize)++] = "Pop";
        }
        else
            index++;
    }

    return result;
}