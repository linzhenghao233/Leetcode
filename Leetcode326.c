bool isPowerOfThree(int n) {
    int flag = 0;

    if (n < 0)
        return false;

    while (n != 0) {
        if (n % 3 != 0)
            flag += n % 3;
        n /= 3;
    }
    if (flag == 1)
        return true;
    return false;
}