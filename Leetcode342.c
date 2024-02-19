bool isPowerOfFour(int n) {
    int temp = 0;

    while (n > 0) {
        temp += n % 4;
        n /= 4;
    }

    if (temp != 1)
        return false;
    return true;
}