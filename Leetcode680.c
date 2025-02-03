bool cmp(char* s, int left, int right) {
    while (left < right) {
        if (s[left] != s[right])
            return false;
        left += 1;
        right -= 1;
    }

    return true;
}

bool validPalindrome(char* s) {
    int len = strlen(s);
    int left = 0;
    int right = len - 1;

    while (left < right) {
        if (s[left] != s[right]) {
            return cmp(s, left + 1, right) || cmp(s, left, right - 1);
        }
        left += 1;
        right -= 1;
    }

    return true;
}