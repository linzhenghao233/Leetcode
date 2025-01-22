int cmp(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

int maxCoins(int* piles, int pilesSize) {
    int result = 0;
    int num = pilesSize / 3;
    qsort(piles, pilesSize, sizeof(int), cmp);

    for (int i = 1; i <= num; i++) {
        result += piles[pilesSize - 2 * i];
    }

    return result;
}