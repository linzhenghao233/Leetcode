int countPrefixes(char** words, int wordsSize, char* s) {
    int result = 0;
    int len = strlen(s);

    for (int i = 0; i < wordsSize; i++) {
        int index = 0;
        bool flag = words[i][index] && s[index];
        while (flag && words[i][index] == s[index]) {
            index++;
            flag = words[i][index] && s[index];
        }
        if (words[i][index] == '\0')
            result++;
    }

    return result;
}