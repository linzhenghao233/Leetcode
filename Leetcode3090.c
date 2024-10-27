int maximumLengthSubstring(char* s) {
    int* hash = (int*)calloc(27, sizeof(int));
    int result = 0;
    int len = strlen(s);
    int left = 0;
    int right = 0;

    while (right < len) {
        hash[s[right] - 'a']++;
        while (hash[s[right] - 'a'] > 2) {
            hash[s[left] - 'a']--;
            left++;
        }
        right++;
        result = result > right - left ? result : right - left;
    }
    free(hash);

    return result;
}