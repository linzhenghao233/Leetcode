char repeatedCharacter(char* s) {
    int* hash = (int*)calloc(26, sizeof(int));
    int len = strlen(s);

    for (int i = 0; i < len; i++) {
        hash[(int)s[i] - 'a']++;
        if (hash[(int)s[i] - 'a'] == 2)
            return s[i];
    }

    free(hash);
    return NULL;
}