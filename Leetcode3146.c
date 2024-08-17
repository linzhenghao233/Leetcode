int findPermutationDifference(char* s, char* t) {
    int* hash = (int*)calloc(26, sizeof(int));
    int result = 0;
    int len = strlen(s);

    for (int i = 0; i < len; i++)
        hash[s[i] - 'a'] = i;
    for (int i = 0; i < len; i++)
        result += abs(hash[t[i] - 'a'] - i);

    free(hash);
    return result;
}