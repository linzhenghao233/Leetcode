int maximumCostSubstring(char* s, char* chars, int* vals, int valsSize) {
    int result = 0;
    int chars_val[26] = { 0 };
    for (int i = 0; i < 26; i++)
        chars_val[i] = i + 1;
    for (int i = 0; i < valsSize; i++)
        chars_val[(int)chars[i] - 'a'] = vals[i];
    int cur = 0;
    int len = strlen(s);

    for (int i = 0; i < len; i++) {
        int temp = chars_val[(int)s[i] - 'a'];
        cur = cur > 0 ? (cur + temp) : temp;
        result = cur > result ? cur : result;
    }

    return result;
}