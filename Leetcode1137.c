int tribonacci(int n) {
    int* arr;
    arr = (int*)malloc(38 * sizeof(int));
    arr[0] = 0, arr[1] = 1, arr[2] = 1;

    if (n == 0)
        return n;
    else if (n < 3)
        return 1;

    for (int i = 3; i <= n; i++)
        arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];

    return arr[n];
}