int findComplement(int num) {
    int result = 0;

    while (result < num) {
        result <<= 1;
        result++;
    }

    return result ^ num;
}