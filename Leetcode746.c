int minCostClimbingStairs(int* cost, int costSize) {
    int* money;
    money = (int*)malloc((costSize + 1) * sizeof(int));
    money[0] = cost[0];
    money[1] = cost[1];

    for (int i = 2; i <= costSize; i++) {
        if (money[i - 1] + cost[i - 1] <= money[i - 2] + cost[i - 2]) {
            money[i] = money[i - 1] + cost[i - 1];
        }
        else {
            money[i] = money[i - 2] + cost[i - 2];
        }
    }
    return money[costSize];
}