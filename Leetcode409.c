int longestPalindrome(char* s) {
    int hash[123] = { 0 };
    int len = strlen(s);
    int result = 0;

    for (int i = 0; i < len; i++)
        hash[(int)s[i]]++;

    for (int i = 0; i < 123; i++) {
        if (hash[i] >= 2) {
            if (hash[i] % 2)
                result += hash[i] - 1;
            else
                result += hash[i];
        }
    }

    return result == len ? result : result + 1;
}