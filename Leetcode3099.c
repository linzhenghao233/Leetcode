int sumOfTheDigitsOfHarshadNumber(int x) {
    int total = 0;
    int temp = x;

    while (temp) {
        total += temp % 10;
        temp /= 10;
    }

    if (x % total)
        return -1;
    else
        return total;
}