int cmp(const void* a, const void* b) {
    return*(int*)a - *(int*)b;
}

int coinChange(int* coins, int coinsSize, int amount) {
    int result;
    qsort(coins, coinsSize, sizeof(int), cmp);

    for (int i = coinsSize - 1; i >= 0; i--) {
        int temp = amount;
        result = 0;
        for (int j = i; j >= 0; j--) {
            if (temp >= coins[j]) {
                result += temp / coins[j];
                temp %= coins[j];
            }
            if (temp == 0)
                return result;
        }
    }
    return -1;
}//贪心算法不行，需要动态规划