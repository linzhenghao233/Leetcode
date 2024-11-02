int minChanges(int n, int k) {
    int result = 0;

    while (n || k) {
        if ((n & 1) && !(k & 1))
            result++;
        else if (!(n & 1) && (k & 1))
            return -1;
        n >>= 1;
        k >>= 1;
    }

    return result;
}