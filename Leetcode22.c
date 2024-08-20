/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#define CATALAN 1430

void func(int n, int left, int right, char** result, char* new, int* returnSize) {
    if (left + right == 2 * n) {
        result[*returnSize] = (char*)calloc(2 * n + 1, sizeof(char));
        strcpy(result[*returnSize], new);
        (*returnSize)++;
        return;
    }

    if (left < n) {
        new[left + right] = '(';
        func(n, left + 1, right, result, new, returnSize);
    }
    if (right < left) {
        new[left + right] = ')';
        func(n, left, right + 1, result, new, returnSize);
    }
}

char** generateParenthesis(int n, int* returnSize) {
    char** result = (char**)calloc(CATALAN, sizeof(char*));
    char* new = (char*)calloc(2 * n + 1, sizeof(char));
    *returnSize = 0;
    func(n, 0, 0, result, new, returnSize);

    return result;
}