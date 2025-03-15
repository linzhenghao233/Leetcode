long long getDescentPeriods(int* prices, int pricesSize) {
    long long result = 1;
    int left = 0;
    int right = 1;

    while (right < pricesSize) {
        if (prices[right] != prices[right - 1] - 1)
            left = right;
        result += right - left + 1;
        right++;
    }

    return result;
}