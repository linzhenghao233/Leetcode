int cmp(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

int maxTotalReward(int* rewardValues, int rewardValuesSize) {
    qsort(rewardValues, rewardValuesSize, sizeof(int), cmp);
    int max = rewardValues[rewardValuesSize - 1];
    int* dp = (int*)calloc(2 * max, sizeof(int));
    dp[0] = 1;
    int result = -1;

    for (int i = 0; i < rewardValuesSize; i++) {
        int temp = rewardValues[i];
        for (int j = 2 * temp - 1; j >= temp; j--) {
            if (dp[j - temp] == 1)
                dp[j] = 1;
        }
    }

    for (int i = 0; i < 2 * max; i++) {
        if (dp[i] == 1)
            result = i;
    }

    free(dp);
    return result;
}