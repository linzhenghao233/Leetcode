char* getSmallestString(char* s) {
    int len = strlen(s);
    int i;

    for (i = 1; i < len; i++) {
        if (s[i] < s[i - 1] && (s[i] % 2 == s[i - 1] % 2)) {
            int temp = s[i];
            s[i] = s[i - 1];
            s[i - 1] = temp;
            break;
        }
    }

    return s;
}