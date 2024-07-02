int cmp(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

int maximumCandies(int* candies, int candiesSize, long long k) {
    qsort(candies, candiesSize, sizeof(int), cmp);
    int left = 1;
    int right = candies[candiesSize - 1];

    while (left <= right) {
        int mid = left + (right - left) / 2;
        long long count = 0;
        for (int i = 0; i < candiesSize; i++)
            count += candies[i] / mid;
        if (count >= k)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return right;
}