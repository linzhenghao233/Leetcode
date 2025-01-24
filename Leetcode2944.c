int minimumCoins(int* prices, int pricesSize) {
    for (int i = (pricesSize + 1) / 2 - 1; i > 0; i--) {
        int min = INT_MAX;
        for (int j = i; j <= i * 2; j++)
            min = fmin(min, prices[j]);
        prices[i - 1] += min;
    }

    return prices[0];
}