int minCostClimbingStairs(int* cost, int costSize) {
    int step = costSize;
    int money = 0;

    while (step - 2 >= 0) {
        if (cost[step - 2] <= cost[step - 1]) {
            money += cost[step - 2];
            step -= 2;
        }
        else {
            money += cost[step - 1];
            step--;
        }
    }
    return money;
}