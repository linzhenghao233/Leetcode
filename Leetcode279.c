int numSquares(int n) {
    int N = 10000;
    int* f = (int*)malloc((N + 1) * sizeof(int));
    for (int i = 1; i <= N; i++)
        f[i] = INT_MAX;
    f[0] = 0;

    for (int i = 1; i * i <= N; i++) {
        for (int j = i * i; j <= N; j++)
            f[j] = fmin(f[j], f[j - i * i] + 1);
    }

    int result = f[n];
    free(f);
    return result;
}