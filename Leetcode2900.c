/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

void add(char** result, char** words, int index_r, int index_w, int len) {
    result[index_r] = (char*)malloc((len + 1) * sizeof(char));
    for (int i = 0; i < len; i++) {
        result[index_r][i] = words[index_w][i];
    }
    result[index_r][len] = '\0';
}

char** getLongestSubsequence(char** words, int wordsSize, int* groups, int groupsSize, int* returnSize) {
    char** result = (char**)malloc(wordsSize * sizeof(char*));
    *returnSize = 0;
    int len = strlen(words[0]);
    add(result, words, (*returnSize)++, 0, len);

    for (int i = 1; i < groupsSize; i++) {
        if (groups[i] == groups[i - 1])
            continue;
        len = strlen(words[i]);
        add(result, words, (*returnSize)++, i, len);
    }

    return result;
}