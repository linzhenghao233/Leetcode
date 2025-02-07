int trainWays(int num) {
    if (num < 2)
        return 1;
    int mod = 1000000007;
    int num1 = 1;
    int num2 = 1;

    for (int i = 2; i <= num; i++) {
        num1 = num1 + num2;
        num2 = num1 - num2;
        num1 = num1 % mod;
    }

    return num1;
}