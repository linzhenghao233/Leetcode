int smallestEvenMultiple(int n) {
    int num = 2;

    if (2 % n == 0)
        return 2;
    if (n % 2 == 0)
        return n;
    while (1) {
        if (num % n == 0)
            return num;
        num += 2;
    }
}