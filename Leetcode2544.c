int alternateDigitSum(int n) {
    int result = 0;
    int sign = 1;

    while (n) {
        result += sign * (n % 10);
        n /= 10;
        sign *= -1;
    }

    return sign == 1 ? -result : result;
}