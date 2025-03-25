int findLucky(int* arr, int arrSize) {
    int cnt[501] = { 0 };
    int result = -1;

    for (int i = 0; i < arrSize; i++) {
        cnt[arr[i]]++;
    }
    for (int i = 1; i < 501; i++) {
        if (cnt[i] == i)
            result = i;
    }

    return result;
}