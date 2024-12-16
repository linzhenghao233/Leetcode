double myPow(double x, int n) {
    double result = 1;
    long long N = n;

    if (n < 0) {
        N = -N;
        x = 1 / x;
    }

    while (N) {
        if (N & 1)
            result *= x;
        x *= x;
        N >>= 1;
    }

    return result;
}