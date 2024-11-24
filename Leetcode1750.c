int minimumLength(char* s) {
    int len = strlen(s);
    int left = 0;
    int right = len - 1;

    while (left < right) {
        if (s[left] != s[right])
            break;

        char flag = s[left];
        while (s[left] == flag)
            left++;
        while (right > left && s[right] == flag)
            right--;
    }

    return right - left + 1;
}