int addDigits(int num) {
    int num1, num2;
    num1 = num % 10;
    num2 = num / 10;

    while (num1 + num2 >= 10) {
        num = num1 + num2;
        num1 = num % 10;
        num2 = num / 10;
    }
    num = num1 + num2;

    return num;
}