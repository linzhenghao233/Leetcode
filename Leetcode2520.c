int countDigits(int num) {
    int flag = num;
    int result = 0;

    while (flag) {
        int temp = flag % 10;
        if (!(num % temp))
            result++;
        flag /= 10;
    }

    return result;
}