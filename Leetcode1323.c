int maximum69Number(int num) {
    int temp = num;
    int cur = 1;
    int mul = 0;

    while (temp) {
        int n = temp % 10;
        if (n == 6)
            mul = cur;
        temp /= 10;
        cur *= 10;
    }

    return num + 3 * mul;
}