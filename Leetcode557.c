char* reverseWords(char* s) {
    int left = 0, right = 0;
    int len = strlen(s);

    while (right <= len) {
        if (s[right] == ' ' || s[right] == '\0') {
            int temp = right - 1;

            while (temp > left) {
                int temp_char = s[temp];
                s[temp] = s[left];
                s[left] = temp_char;
                temp--;
                left++;
            }
            left = right + 1;
        }
        right++;
    }

    return s;
}