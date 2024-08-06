/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findWordsContaining(char** words, int wordsSize, char x, int* returnSize) {
    int* result = (int*)calloc(wordsSize, sizeof(int));
    int index = -1;

    for (int i = 0; i < wordsSize; i++) {
        int len = strlen(words[i]);
        for (int j = 0; j < len; j++) {
            if (words[i][j] == x) {
                index++;
                result[index] = i;
                break;
            }
        }
    }

    *returnSize = index + 1;
    return result;
}