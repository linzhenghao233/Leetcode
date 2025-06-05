bool hasSameDigits(char* s) {
    int len = strlen(s);
    int num = len - 2;

    for (int i = 0; i < num; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            s[j] = ((int)s[j] + (int)s[j + 1]) % 10;
        }
    }

    return s[0] == s[1];
}