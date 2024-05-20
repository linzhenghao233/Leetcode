int numberOfSubstrings(char* s) {
    int hash[3] = { 0 };
    int result = 0;
    int left = 0, right = 0;
    int len = strlen(s);

    while (right < len) {
        hash[(int)s[right] - 'a']++;

        while (hash[0] > 0 && hash[1] > 0 && hash[2] > 0) {
            result += len - right;
            hash[(int)s[left] - 'a']--;
            left++;
        }
        right++;
    }
    return result;
}