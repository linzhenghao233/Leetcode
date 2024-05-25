int hammingDistance(int x, int y) {
    int result = 0;
    x = x ^ y;

    while (x > 0) {
        x &= (x - 1);
        result++;
    }

    return result;
}