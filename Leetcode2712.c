long long minimumCost(char* s) {
    int len = strlen(s);
    long long result = 0;

    for (int i = 1; i < len; i++) {
        if (s[i - 1] != s[i]) {
            result += fmin(i, len - i);
        }
    }

    return result;
}