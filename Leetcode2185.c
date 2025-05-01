int prefixCount(char** words, int wordsSize, char* pref) {
    int result = 0;
    int len = strlen(pref);
    bool flag = true;

    for (int i = 0; i < wordsSize; i++) {
        for (int j = 0; j < len; j++) {
            if (words[i][j] != pref[j]) {
                flag = false;
                break;
            }
        }
        if (flag)
            result++;
        flag = true;
    }

    return result;
}