bool isPowerOfTwo(int n) {
    int temp = 0;

    while (n > 0) {
        temp += n % 2;
        n /= 2;
    }
    if (temp != 1)
        return false;
    return true;
}