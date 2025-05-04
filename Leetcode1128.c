int numEquivDominoPairs(int** dominoes, int dominoesSize, int* dominoesColSize) {
    int cnt[10][10] = { 0 };
    int result = 0;

    for (int i = 0; i < dominoesSize; i++) {
        int a = dominoes[i][0];
        int b = dominoes[i][1];
        result += a <= b ? cnt[a][b]++ : cnt[b][a]++;
    }

    return result;
}