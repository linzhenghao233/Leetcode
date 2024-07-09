bool isIsomorphic(char* s, char* t) {
    int len = strlen(s);
    int* hash_s = (int*)calloc(128, sizeof(int));
    int* hash_t = (int*)calloc(128, sizeof(int));

    for (int i = 0; i < len; i++) {
        if (hash_s[(int)s[i]] != hash_t[(int)t[i]]) {
            free(hash_s);
            free(hash_t);
            return false;
        }
        hash_s[(int)s[i]] = i + 1;
        hash_t[(int)t[i]] = i + 1;
    }

    free(hash_s);
    free(hash_t);
    return true;
}