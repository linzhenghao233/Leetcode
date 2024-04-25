/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findAnagrams(char* s, char* p, int* returnSize) {
    int len_s = strlen(s);
    int len_p = strlen(p);
    *returnSize = 0;

    if (len_p > len_s)
        return NULL;

    int* result = (int*)malloc(len_s * sizeof(int));
    int* hash = (int*)calloc(26, sizeof(int));
    int* window = (int*)calloc(26, sizeof(int));
    int i;
    int flag = 0;

    for (i = 0; i < len_p; i++) {
        hash[(int)p[i] - 'a']++;
        window[(int)s[i] - 'a']++;
    }
    for (i = 0; i < 26; i++)
        flag += (window[i] == hash[i]);
    if (flag == 26)
        result[(*returnSize)++] = 0;

    for (i = len_p; i < len_s; i++) {
        window[(int)s[i] - 'a']++;
        window[(int)s[i - len_p] - 'a']--;

        flag = 0;
        for (int j = 0; j < 26; j++)
            flag += (window[j] == hash[j]);
        if (flag == 26)
            result[(*returnSize)++] = i - len_p + 1;
    }
    free(hash);
    free(window);
    return result;
}