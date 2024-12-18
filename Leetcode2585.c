int waysToReachTarget(int target, int** types, int typesSize, int* typesColSize) {
    long* f = (long*)calloc(target + 1, sizeof(long));
    f[0] = 1;

    for (int i = 0; i < typesSize; i++) {
        for (int j = target; j > 0; j--) {
            for (int k = 1; k <= types[i][0] && j - k * types[i][1] >= 0; k++) {
                f[j] = (f[j] + f[j - k * types[i][1]]) % 100000007;
            }
        }
    }
    int result = f[target];
    free(f);

    return result;
}