bool isPalindrome(char* s) {
    int len = strlen(s);
    int left = 0, right = len - 1;

    while (left < right) {
        if (!isalnum(s[left])) {
            left++;
            continue;
        }
        if (!isalnum(s[right])) {
            right--;
            continue;
        }
        if (tolower(s[left]) != tolower(s[right]))
            return false;
        left++;
        right--;
    }
    return true;
}