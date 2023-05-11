int reverse(int x) {
    long num1 = 0;

    while (x != 0) {
        num1 = num1 * 10 + x % 10;
        x /= 10;
    }
    if (num1 > pow(2, 31) || num1 < -pow(2, 31) - 1)
        return 0;
    return num1;
}