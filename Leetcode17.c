/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** letterCombinations(char* digits, int* returnSize) {
    char ch[10][5] = { "\0", "\0", "abc\0", "def\0", "ghi\0", "jkl\0", "mno\0", "pqrs\0", "tuv\0", "wxyz\0" };
    int i = 0;

    while (digits[i] != '\0') {
        int key = digits[i] - 48;
        if
    }
}