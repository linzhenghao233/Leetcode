int cmp(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

int maxIceCream(int* costs, int costsSize, int coins) {
    qsort(costs, costsSize, sizeof(int), cmp);
    int result = 0;

    for (int i = 0; i < costsSize; i++) {
        if (coins >= costs[i]) {
            coins -= costs[i];
            result++;
        }
        else
            break;
    }

    return result;
}