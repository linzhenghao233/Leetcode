char* longestPalindrome(char* s) {
    int start, i, max, index;
    index = max = start = 0;
    int left = 0, right = strlen(s) - 1;
    for (i = 0; i < strlen(s) / 2; i++) {
        if (s[left] != s[right])
            break;
        left++, right--;
        if (left == strlen(s) / 2 - 1)
            max = strlen(s);
    }


    for (i = 0; i < strlen(s); i++) {
        if (i < strlen(s) - 1 && s[i] == s[i + 1]) {
            index = i;
            while (s[index] == s[index + 1] && index < strlen(s) - 1) {
                index++;
            }
            if (index - i + 1 > max) {
                max = index - i + 1;
                start = i;
            }
            continue;
        }
        else if (i > 0 && i < strlen(s) - 1 && s[i - 1] == s[i + 1]) {
            left = i - 1, right = i + 1;
            int temp_max = 1;
            while (left >= 0 && right < strlen(s) && s[left] == s[right]) {
                temp_max += 2;
                left--, right++;
            }
            if (temp_max > max) {
                max = temp_max;
                start = left + 1;
            }
            continue;
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