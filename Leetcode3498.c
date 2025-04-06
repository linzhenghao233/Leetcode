int reverseDegree(char* s) {
    int result = 0;
    int len = strlen(s);

    for (int i = 0; i < len; i++) {
        result += (26 - ((int)s[i] - 'a')) * (i + 1);
    }

    return result;
}