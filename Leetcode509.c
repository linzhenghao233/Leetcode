int fib(int n) {
    int* F;
    int answer;
    F = (int*)malloc(31 * sizeof(int));
    F[0] = 0;
    F[1] = 1;

    if (n < 2) {
        answer = F[n];
        return answer;
    }
    for (int i = 2; i <= n; i++)
        F[i] = F[i - 1] + F[i - 2];
    answer = F[n - 1] + F[n - 2];
    return answer;
}