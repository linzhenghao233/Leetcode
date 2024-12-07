int coinChange(int* coins, int coinsSize, int amount) {
    int result = -1;
    int* dp = (int*)malloc((amount + 1) * sizeof(int));
    int max = amount + 1;
    for (int i = 1; i <= amount; i++)
        dp[i] = max;
    dp[0] = 0;

    for (int i = 1; i <= coinsSize; i++) {
        for (int j = 1; j <= amount; j++) {
            if (coins[i - 1] > j)
                dp[j] = dp[j];
            else
                dp[j] = fmin(dp[j], dp[j - coins[i - 1]] + 1);
        }
    }
    result = dp[amount] != max ? dp[amount] : -1;
    free(dp);

    return result;
}