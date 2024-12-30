int kConcatenationMaxSum(int* arr, int arrSize, int k) {
    long long result = 0;
    long long cur = 0;
    long long total = 0;
    int mod = 1000000007;

    if (k == 1) {
        for (int i = 0; i < arrSize; i++) {
            int index = i % arrSize;
            cur = cur >= 0 ? (cur + arr[index]) : arr[index];
            result = cur > result ? cur : result;
        }
    }
    else {
        for (int i = 0; i < arrSize; i++)
            total += arr[i];

        for (int i = 0; i < arrSize * 2; i++) {
            int index = i % arrSize;
            cur = cur >= 0 ? (cur + arr[index]) : arr[index];
            result = cur > result ? cur : result;
        }

        if (total > 0)
            result += total * (k - 2);
    }

    return result % mod;
}