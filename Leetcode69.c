int mySqrt(int x) {
    int result = x / 2;

    if (x == 0 || x == 1)
        return x;

    for (int i = 2; i <= result; i++) {
        result = x / i;
    }
    return result;
}