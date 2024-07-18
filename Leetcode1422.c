int maxScore(char* s) {
    int len = strlen(s);
    int* hash = (int*)calloc(len + 1, sizeof(int));
    int count_0 = 0;
    int result = 0;

    for (int i = len - 1; i >= 0; i--) {
        if (s[i] == '1')
            hash[i] = hash[i + 1] + 1;
        else
            hash[i] = hash[i + 1];
    }

    for (int i = 0; i < len - 1; i++) {
        if (s[i] == '0')
            count_0++;
        if (count_0 + hash[i + 1] > result)
            result = count_0 + hash[i + 1];
    }

    free(hash);
    return result;
}