int qpow(int base, int pow) {
    int result = 1;

    while (pow) {
        if (pow & 1)
            result *= base;
        base *= base;
        pow >>= 1;
    }

    return result;
}

int numberOfWays(int n, int x) {
    long* f = (long*)calloc(n + 1, sizeof(long));
    f[0] = 1;

    for (int i = 1; qpow(i, x) <= n; i++) {
        int temp = qpow(i, x);
        for (int j = n; j >= temp; j--)
            f[j] += f[j - temp];
    }

    return (int)(f[n] % 1000000007);
}