int countKeyChanges(char* s) {
    int len = strlen(s);
    int result = 0;

    for (int i = 1; i < len; i++) {
        if (tolower(s[i]) != tolower(s[i - 1]))
            result++;
    }

    return result;
}