char* getSmallestString(char* s, int k) {
    int len = strlen(s);

    for (int i = 0; i < len; i++) {
        int temp = ('z' + 1 - s[i]) < (s[i] - 'a') ? ('z' + 1 - s[i]) : (s[i] - 'a');

        if (temp <= k) {
            s[i] = 'a';
            k -= temp;
        }
        else {
            s[i] -= k;
            return s;
        }
    }

    return s;
}