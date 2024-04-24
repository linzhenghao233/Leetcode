bool checkInclusion(char* s1, char* s2) {
    int* hash = (int*)calloc(26, sizeof(int));
    int* window = (int*)calloc(26, sizeof(int));
    int flag = 0;
    int i;
    int s1_len = strlen(s1);
    int s2_len = strlen(s2);
    if (s1_len > s2_len) {
        free(hash);
        free(window);
        return false;
    }

    for (i = 0; i < s1_len; i++) {
        hash[(int)s1[i] - 'a']++;
        window[(int)s2[i] - 'a']++;
    }
    for (i = 0; i < 26; i++)
        flag += (hash[i] == window[i]);
    if (flag == 26) {
        free(hash);
        free(window);
        return true;
    }

    for (i = s1_len; i < s2_len; i++) {
        window[(int)s2[i - s1_len] - 'a']--;
        window[(int)s2[i] - 'a']++;
        flag = 0;
        for (int j = 0; j < 26; j++)
            flag += (hash[j] == window[j]);
        if (flag == 26) {
            free(hash);
            free(window);
            return true;
        }
    }
    free(hash);
    free(window);
    return false;
}