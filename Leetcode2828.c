bool isAcronym(char** words, int wordsSize, char* s) {
    int s_len = strlen(s);

    if (s_len != wordsSize)
        return false;

    for (int i = 0; i < wordsSize; i++) {
        if (words[i][0] != s[i])
            return false;
    }

    return true;
}