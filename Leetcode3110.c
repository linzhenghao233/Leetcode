int scoreOfString(char* s) {
    int result = 0;
    int len = strlen(s);

    for (int i = 1; i < len; i++)
        result += abs((int)s[i] - s[i - 1]);

    return result;
}