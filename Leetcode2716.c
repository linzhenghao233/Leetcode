int minimizedStringLength(char* s) {
    int cnt[26] = { 0 };
    int len = strlen(s);
    int result = 0;

    for (int i = 0; i < len; i++) {
        if (cnt[(int)s[i] - 'a'] == 0) {
            result++;
            cnt[(int)s[i] - 'a']++;
        }
    }

    return result;
}