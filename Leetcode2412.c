long long minimumMoney(int** transactions, int transactionsSize, int* transactionsColSize) {
    long long total_lose = 0;
    int max = 0;

    for (int i = 0; i < transactionsSize; i++) {
        int cost = transactions[i][0];
        int cashback = transactions[i][1];
        total_lose += fmax(cost - cashback, 0);
        max = fmax(max, fmin(cost, cashback));
    }

    return total_lose + max;
}