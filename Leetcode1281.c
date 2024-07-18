

int subtractProductAndSum(int n) {
    int num1 = 1;
    int num2 = 0;

    while (n) {
        int temp = n % 10;
        num1 *= temp;
        num2 += temp;
        n /= 10;
    }

    return num1 - num2;
}