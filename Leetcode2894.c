int differenceOfSums(int n, int m) {
    int sum = (1 + n) * n / 2;
    int num = n / m;
    int num2 = (1 + num) * num / 2 * m;

    return sum - num2 - num2;
}