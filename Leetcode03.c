int lengthOfLongestSubstring(char* s) {
    int i, j, temp = 1, max_len = 0, start = 0;

    for (i = 0; i < strlen(s); i++) {
        for (j = start, temp = 1; j < i; j++) {
            if (s[i] == s[j]) {
                start = j + 1;
                break;
            }
            temp++;
        }
        max_len = temp > max_len ? temp : max_len;
    }
    return max_len;
}