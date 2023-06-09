bool wordBreak(char* s, char** wordDict, int wordDictSize) {
    int s_len = strlen(s);
    int k = 0, len = 1;

    for (int i = 0; i < strlen(s); i++) {
        for (int j = 0; j < wordDictSize; j++) {
            if (len == strlen(wordDict[j]) && !strncmp(s + k, wordDict[j], strlen(wordDict[j]))) {
                k += strlen(wordDict[j]);
                s_len -= strlen(wordDict[j]);
                len = 0;
                break;
            }
        }
        len++;
    }
    if (s_len == 0)
        return true;
    else
        return false;
}