int cmp(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

int findContentChildren(int* g, int gSize, int* s, int sSize) {
    qsort(g, gSize, sizeof(int), cmp);
    qsort(s, sSize, sizeof(int), cmp);
    int g_index = 0;
    int s_index = 0;
    int result = 0;

    while (g_index < gSize && s_index < sSize) {
        if (s[s_index] >= g[g_index]) {
            s_index++;
            g_index++;
            result++;
        }
        else
            s_index++;
    }

    return result;
}