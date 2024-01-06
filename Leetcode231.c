bool isPowerOfTwo(int n) {
    if (n <= 0)
        return false;

    int judge = n & (n - 1);
    if (judge == 0)
        return true;
    return false;
}