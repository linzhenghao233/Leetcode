char* minWindow(char* s, char* t) {
    int hash_len = (int)'z' - 'A';
    int* hash = (int*)calloc(hash_len + 1, sizeof(int));
    int left, right;
    int result_len = INT_MAX;
    int result_start = 0;
    int s_len = strlen(s);
    int t_len = strlen(t);
    int flag = t_len;
    left = right = 0;

    for (int i = 0; i < t_len; i++)
        hash[(int)t[i] - 'A']++;

    while (right < s_len) {
        if (hash[(int)s[right] - 'A'] > 0)
            flag--;
        hash[(int)s[right] - 'A']--;
        right++;

        while (flag == 0) {
            if (right - left < result_len) {
                result_len = right - left;
                result_start = left;
            }
            hash[(int)s[left] - 'A']++;
            if (hash[(int)s[left] - 'A'] > 0)
                flag++;
            left++;
        }
    }

    if (result_len == INT_MAX)
        return "";
    char* result = (char*)malloc((result_len + 1) * sizeof(char));
    strncpy(result, s + result_start, result_len);
    result[result_len] = '\0';

    free(hash);
    return result;
}