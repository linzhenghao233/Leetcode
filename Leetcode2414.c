int longestContinuousSubstring(char* s) {
    int result = 1;
    int temp = 1;
    int len = strlen(s);

    for (int i = 1; i < len; i++) {
        if (s[i] - s[i - 1] == 1)
            temp++;
        else
            temp = 1;
        if (temp > result)
            result = temp;
    }

    return result;
}