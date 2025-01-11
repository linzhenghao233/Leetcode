int generateKey(int num1, int num2, int num3) {
    int result = 0;

    for (int i = 1; num1 && num2 && num3; i *= 10) {
        result += fmin(fmin(num1 % 10, num2 % 10), num3 % 10) * i;
        num1 /= 10;
        num2 /= 10;
        num3 /= 10;
    }

    return result;
}