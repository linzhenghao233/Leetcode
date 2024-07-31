char* makeSmallestPalindrome(char* s) {
    int len = strlen(s);
    int left = 0;
    int right = len - 1;

    while (left < right) {
        if (s[left] != s[right]) {
            if (s[left] < s[right])
                s[right] = s[left];
            else
                s[left] = s[right];
        }
        left++;
        right--;
    }

    return s;
}