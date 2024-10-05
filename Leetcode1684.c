

int countConsistentStrings(char* allowed, char** words, int wordsSize) {
    int* hash = (int*)calloc(26, sizeof(int));
    int len_allowed = strlen(allowed);
    int result = 0;

    for (int i = 0; i < len_allowed; i++)
        hash[(int)allowed[i] - 'a'] = 1;

    for (int i = 0; i < wordsSize; i++) {
        int len = strlen(words[i]);
        int flag = 1;
        for (int j = 0; j < len; j++) {
            if (!hash[(int)words[i][j] - 'a']) {
                flag = 0;
                break;
            }
        }
        if (flag)
            result++;
    }

    free(hash);
    return result;
}