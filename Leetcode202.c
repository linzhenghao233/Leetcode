bool isHappy(int n) {
    int next = 0;

    while (next != 1) {
        next = 0;
        while (n > 0) {
            next += pow(n % 10, 2);
            n /= 10;
        }
        n = next;
        if (next == 4)
            return false;
    }
    return true;
}