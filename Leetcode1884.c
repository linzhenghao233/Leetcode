int twoEggDrop(int n) {
    int result = 0;

    while (n >= 1) {
        result++;
        n -= result;
    }

    return  result;
}