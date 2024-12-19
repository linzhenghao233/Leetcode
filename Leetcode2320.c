int countHousePlacements(int n) {
    int mod = 1000000007;
    int max = 10001;
    int* f = (int*)malloc(max * sizeof(int));
    f[0] = 1;
    f[1] = 2;
    for (int i = 2; i < max; i++)
        f[i] = (f[i - 1] + f[i - 2]) % mod;

    return (int)((long)f[n] * f[n] % mod);
}