int maxDiff(int num) {
    int n = -1;
    int no9 = -1;   //记录第一位不为9的数字
    int no1 = -1;   //记录第一位不为1的数字
    int max = 0;
    int min = 0;
    int temp = num;

    while (temp) {
        n = temp % 10;
        if (n != 9)
            no9 = n;
        if (n > 1)
            no1 = n;
        temp /= 10;
    }

    if (no9 == -1)
        max = num;
    if (no1 == -1)
        min = num;

    int mul = 1;
    int first = n;
    while (num) {
        n = num % 10;
        if (n == no9)
            max += 9 * mul;
        else if (no9 != -1)
            max += n * mul;
        if (n == no1 && no1 == first)
            min += 1 * mul;
        else if (n != no1 && no1 != -1)
            min += n * mul;
        mul *= 10;
        num /= 10;
    }

    return max - min;
}