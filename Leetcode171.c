int titleToNumber(char* columnTitle) {
    int result = 0;
    int len = strlen(columnTitle);
    long n = 1;

    for (int i = len - 1; i >= 0; i--) {
        result += (columnTitle[i] - 'A' + 1) * n;
        n *= 26;
    }
    return result;
}