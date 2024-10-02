

int minCount(int* coins, int coinsSize) {
    int result = 0;

    for (int i = 0; i < coinsSize; i++) {
        result += coins[i] % 2;
        result += coins[i] / 2;
    }

    return result;
}
