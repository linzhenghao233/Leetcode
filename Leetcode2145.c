int numberOfArrays(int* differences, int differencesSize, int lower, int upper) {
    long long cnt = 0;
    long long min = 0;
    long long max = 0;

    for (int i = 0; i < differencesSize; i++) {
        cnt += differences[i];
        min = fmin(min, cnt);
        max = fmax(max, cnt);
    }

    return fmax(upper - lower - max + min + 1, 0);
}