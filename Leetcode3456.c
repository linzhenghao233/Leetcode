bool hasSpecialSubstring(char* s, int k) {
    int left = 0;
    int right = 0;
    int len = strlen(s);

    while (right < len) {
        if (s[left] == s[right]) {
            int temp = right - left + 1;
            printf("%d,", temp);
            if (temp == k && s[right + 1] != s[left])
                return 1;
            right++;
        }
        else {
            left = right;
        }
    }

    return 0;
}