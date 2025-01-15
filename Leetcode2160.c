int cmp(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

int minimumSum(int num) {
    int arr[4] = { 0 };

    for (int i = 0; num != 0; i++) {
        arr[i] = num % 10;
        num /= 10;
    }
    qsort(arr, 4, sizeof(int), cmp);

    return (arr[0] + arr[1]) * 10 + (arr[2] + arr[3]);
}