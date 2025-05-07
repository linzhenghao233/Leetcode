int commonFactors(int a, int b) {
    int min = a < b ? a : b;
    int result = 0;

    for (int i = 1; i <= min; i++) {
        if (!(a % i) && !(b % i))
            result++;
    }

    return result;
}