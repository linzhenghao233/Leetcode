/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* minCosts(int* cost, int costSize, int* returnSize) {
    int min = INT_MAX;

    for (int i = 0; i < costSize; i++) {
        if (cost[i] < min)
            min = cost[i];
        cost[i] = min;
    }

    *returnSize = costSize;
    return cost;
}