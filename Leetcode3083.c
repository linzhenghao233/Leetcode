bool isSubstringPresent(char* s) {
    int* vis = (int*)calloc(26, sizeof(int));
    int len = strlen(s);

    for (int i = 1; i < len; i++) {
        int x = (int)s[i - 1] - 'a';
        int y = (int)s[i] - 'a';
        vis[x] |= 1 << y;
        if (vis[y] >> x & 1) {
            free(vis);
            return true;
        }
    }

    free(vis);
    return false;
}