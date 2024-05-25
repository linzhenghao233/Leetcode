

int minBitFlips(int start, int goal) {
    int result = 0;
    start ^= goal;

    while (start > 0) {
        start &= (start - 1);
        result++;
    }
    return result;
}