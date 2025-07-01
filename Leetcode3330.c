int possibleStringCount(char* word) {
    int result = 1;
    int len = strlen(word);

    for (int i = 1; i < len; i++) {
        if (word[i] == word[i - 1])
            result += 1;
    }

    return result;
}