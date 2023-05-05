char* longestPalindrome(char* s) {
    int start, i, max, index, temp_max;
    index = max = start = 0;
    int left, right;

    for (i = 0; i < strlen(s); i++) {
        if (i < strlen(s) - 1 && s[i] == s[i + 1]) {
            index = i;
            while (index < strlen(s) - 1 && s[index] == s[index + 1]) {
                index++;
            }
            if (index - i + 1 > max) {
                max = index - i + 1;
                start = i;
            }
            left = i - 1, right = i + 2;
            temp_max = 2;
            while (left >= 0 && s[left] == s[right]) {
                left--, right++;
                temp_max += 2;
            }
            if (temp_max > max) {
                max = temp_max;
                start = left + 1;
            }
        }
        if (i > 0 && i < strlen(s) - 1 && s[i - 1] == s[i + 1]) {
            left = i - 1, right = i + 1;
            temp_max = 1;
            while (left >= 0 && right < strlen(s) && s[left] == s[right]) {
                temp_max += 2;
                left--, right++;
            }
            if (temp_max > max) {
                max = temp_max;
                start = left + 1;
            }
        }
    }
    if (max == 0) {
        max++;
        start = 0;
    }
    char* ch;
    ch = (char*)malloc((max + 1) * sizeof(char));
    for (i = 0; i < max; i++, start++) {
        ch[i] = s[start];
    }
    ch[max] = '\0';
    return ch;
}