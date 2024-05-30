long long minEnd(int n, int x) {
    long long result = x;
    int temp = n - 1;

    for (int i = 0; temp > 0; i++) {
        if (!(result & (1LL << i))) {
            if (temp & 1)
                result |= (1LL << i);
            temp >>= 1;
        }
    }

    return result;
}