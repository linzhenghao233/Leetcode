int countHomogenous(char* s) {
    long result = 0;
    int len = strlen(s);
    long left = 0;
    long right = 0;

    while (right < len) {
        if (s[left] != s[right])
            left = right;

        right++;
        result = (result + right - left) % 1000000007;
    }

    return (int)result;
}