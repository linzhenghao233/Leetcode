int findJudge(int n, int** trust, int trustSize, int* trustColSize) {
    int* out = (int*)calloc(n + 1, sizeof(int));
    int* in = (int*)calloc(n + 1, sizeof(int));

    for (int i = 0; i < trustSize; i++) {
        out[trust[i][0]]++;
        in[trust[i][1]]++;
    }

    for (int i = 1; i <= n; i++) {
        if (out[i] == 0 && in[i] == n - 1) {
            free(out);
            free(in);
            return i;
        }
    }

    free(out);
    free(in);
    return -1;
}