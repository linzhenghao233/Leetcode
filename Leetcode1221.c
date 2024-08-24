int balancedStringSplit(char* s) {
    int left = 0;
    int right = 0;
    int result = 0;
    int len = strlen(s);

    for (int i = 0; i < len; i++) {
        if (s[i] == 'L')
            left++;
        else
            right++;

        if (left == right)
            result++;
    }

    return result;
}