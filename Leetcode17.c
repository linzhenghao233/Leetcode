/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

void backtrack(char** res, char* digits, char ch[10][5], int* returnSize, int flag, char* combination) {
    if (flag == strlen(digits)) {
        res[*returnSize] = strdup(combination);
        (*returnSize)++;
        return;
    }
    int num = (int)(digits[flag] - '0');
    int len = strlen(ch[num]);

    for (int i = 0; i < len; i++) {
        combination[flag] = ch[num][i];
        combination[flag + 1] = '\0';
        backtrack(res, digits, ch, returnSize, flag + 1, combination);
    }
}

char** letterCombinations(char* digits, int* returnSize) {
    char ch[10][5] = { "\0", "\0", "abc\0", "def\0", "ghi\0", "jkl\0", "mno\0", "pqrs\0", "tuv\0", "wxyz\0" };
    int len = 1;

    if (strlen(digits) == 0) {
        *returnSize = 0;
        return NULL;
    }

    for (int i = 0; i < strlen(digits); i++) {
        int num = (int)(digits[i] - '0');
        len *= strlen(ch[num]);
    }
    char** res = (char**)malloc(len * sizeof(char*));
    char* combination = (char*)malloc((strlen(digits) + 1) * sizeof(char));
    combination[strlen(digits)] = '\0';

    *returnSize = 0;
    backtrack(res, digits, ch, returnSize, 0, combination);
    free(combination);

    return res;
}