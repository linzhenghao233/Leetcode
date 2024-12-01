int dfs(int i, int zero, int one, int* memo, int mod) {
    if (i < 0)
        return 0;
    if (i == 0)
        return 1;
    if (memo[i] != -1)
        return memo[i];

    memo[i] = (dfs(i - zero, zero, one, memo, mod) + dfs(i - one, zero, one, memo, mod)) % mod;

    return memo[i];
}

int countGoodStrings(int low, int high, int zero, int one) {
    int mod = 1000000007;
    int* memo = (int*)malloc((high + 1) * sizeof(int));
    memset(memo, -1, (high + 1) * sizeof(int));
    int result = 0;

    for (int i = low; i <= high; i++)
        result = (result + dfs(i, zero, one, memo, mod)) % mod;

    free(memo);
    return (int)result;
}