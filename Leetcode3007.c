//³¬Ê±£¡
long long findMaximumNumber(long long k, int x) {
    long long temp = 0;
    long long num = 1;

    while (1) {
        for (int bit = x - 1; bit < 64; bit += x) {
            if ((num & (1LLU << bit)))
                temp++;
        }
        if (temp > k)
            break;
        num++;
    }

    return num - 1;
}