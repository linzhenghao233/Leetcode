int minCostClimbingStairs(int* cost, int costSize) {
    int step = 0;
    int money = 0;

    while (step + 1 < costSize) {
        if (cost[step] < cost[step + 1]) {
            money += cost[step];
            step++;
            if (step + 2 >= costSize)
                break;
        }
        else {
            money += cost[step + 1];
            step += 2;
        }
    }
    return money;
}