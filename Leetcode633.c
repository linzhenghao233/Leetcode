bool judgeSquareSum(int c) {
    int a = 0;
    int b = sqrt(c);

    while (a <= b) {
        if (a * a == c - b * b)
            return true;
        if (a * a < c - b * b)
            a++;
        else
            b--;
    }

    return false;
}