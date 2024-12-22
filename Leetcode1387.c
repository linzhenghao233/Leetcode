int dfs(int n) {
    if (n == 1)
        return 0;

    if (n & 1)
        return dfs((n * 3 + 1) / 2) + 2;
    else
        return dfs(n / 2) + 1;
}

int cmp(const void* a, const void* b) {
    int u = *(int*)a;
    int v = *(int*)b;
    int f1 = dfs(u);
    int f2 = dfs(v);
    if (f1 != f2)
        return f1 - f2;
    else
        return u - v;
}

int getKth(int lo, int hi, int k) {
    int size = hi - lo + 1;
    int* f = (int*)malloc(size * sizeof(int));

    for (int i = 0; i < size; i++)
        f[i] = lo + i;
    qsort(f, size, sizeof(int), cmp);
    int result = f[k - 1];
    free(f);

    return result;
}