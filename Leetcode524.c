char* findLongestWord(char* s, char** dictionary, int dictionarySize) {
    int s_len = strlen(s);
    int* index = (int*)calloc(dictionarySize, sizeof(int));
    int* len = (int*)malloc(dictionarySize * sizeof(int));
    for (int i = 0; i < dictionarySize; i++) {
        len[i] = strlen(dictionary[i]);
    }
    char* result = NULL;

    for (int i = 0; i < s_len; i++) {
        char cur = s[i];
        for (int j = 0; j < dictionarySize; j++) {
            if (dictionary[j][index[j]] == cur) {
                index[j]++;
            }
        }
    }

    int max_len = 0;
    for (int i = 0; i < dictionarySize; i++) {
        if (index[i] == len[i]) {
            if (len[i] > max_len || (len[i] == max_len && strcmp(dictionary[i], result) < 0)) {
                max_len = len[i];
                free(result);
                result = strdup(dictionary[i]);
            }
        }
    }

    free(index);
    free(len);
    return result ? result : "";
}