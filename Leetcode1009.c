int bitwiseComplement(int n) {
    int flag = n;
    int bit = 0;

    do {
        n ^= (1 << bit);
        bit++;
        flag >>= 1;
    } while (flag);

    return n;
}