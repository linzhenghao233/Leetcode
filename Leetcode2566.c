int minMaxDifference(int num) {
    int len = 0;
    int temp = num;
    int first = 0;
    int replace = 0;
    while (temp) {
        len++;
        first = temp % 10;
        if (first != 9)
            replace = first;
        temp /= 10;
    }

    int mul = 1;
    int max = 0;
    int min = 0;
    while (num) {
        temp = num % 10;
        if (temp == replace)
            max += 9 * mul;
        else
            max += temp * mul;

        if (temp != first)
            min += temp * mul;

        mul *= 10;
        num /= 10;
    }

    return max - min;
}