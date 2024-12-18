int change(int amount, int* coins, int coinsSize) {
    unsigned int* f = (unsigned int*)calloc(amount + 1, sizeof(unsigned int));
    f[0] = 1;

    for (int i = 0; i < coinsSize; i++) {
        for (int j = coins[i]; j <= amount; j++)
            f[j] += f[j - coins[i]];
    }

    int result = f[amount];
    free(f);
    return result;
}