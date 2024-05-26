bool hasAlternatingBits(int n) {
    int flag = n & 1;

    while (n > 0) {
        if ((n & 1) != flag)
            return false;
        if (flag)
            flag--;
        else
            flag++;
        n >>= 1;
    }
    return true;
}