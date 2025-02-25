int fib(int n) {
    if (n == 0)
        return 0;
    else if (n < 2)
        return 1;
    int num1 = 0;
    int num2 = 1;

    for (int i = 2; i <= n; i++) {
        num2 = num1 + num2;
        num1 = num2 - num1;
        num2 %= 1000000007;
    }

    return num2;
}