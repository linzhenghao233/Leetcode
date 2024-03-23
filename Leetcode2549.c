int distinctIntegers(int n) {
    int* arr = (int*)calloc(n, sizeof(int));
    int result = 1;
    arr[n - 1] = 1;

    for (int i = n; i > 1; i--) {
        for (int j = n - 1; j > 1; j--) {
            if (i % j == 1 && arr[j - 1] == 0) {
                arr[j - 1] = 1;
                result++;
            }
        }
    }
    free(arr);

    return result;
}