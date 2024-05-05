int longestSemiRepetitiveSubstring(char* s) {
    int result = 1;
    int temp = 1;
    int flag = 0;
    int left = 0;
    int right = 1;
    int left_temp = 0;

    while (right < strlen(s)) {
        if (s[right] == s[right - 1]) {
            flag++;
            if (flag > 1) {
                left = left_temp;
                flag = 1;
            }
            if (flag == 1)
                left_temp = right;
        }
        temp = right - left + 1;
        if (temp > result)
            result = temp;
        right++;
    }
    return result;
}