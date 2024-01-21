int maxProfit(int* prices, int pricesSize) {
    int money = 0;
    int min = prices[0];
    int p = 0;

    while (p < pricesSize) {
        if (prices[p] <= min) {
            min = prices[p];
            p++;
            continue;
        }
        int temp = prices[p] - min;
        if (temp > money)
            money = temp;
        p++;
    }
    return money;
}