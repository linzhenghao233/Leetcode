int numOfSubarrays(int* arr, int arrSize, int k, int threshold) {
    int window = 0;
    int i;
    int result = 0;

    for (i = 0; i < k; i++)
        window += arr[i];
    for (; i < arrSize; i++) {
        if (window >= k * threshold)
            result++;
        window += arr[i] - arr[i - k];
    }
    if (window >= k * threshold)
        result++;
    return result;
}