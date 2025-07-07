int buyChoco(int* prices, int pricesSize, int money) {
    int n1 = INT_MAX;
    int n2 = INT_MAX;

    for (int i = 0; i < pricesSize; i++) {
        if (prices[i] <= n1) {
            n2 = n1;
            n1 = prices[i];
        }
        else if (prices[i] < n2)
            n2 = prices[i];
    }

    return n1 + n2 <= money ? money - n1 - n2 : money;
}