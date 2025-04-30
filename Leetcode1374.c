char* generateTheString(int n) {
    char* result = (char*)malloc((n + 1) * sizeof(char));
    result[n] = '\0';
    for (int i = 0; i < n; i++)
        result[i] = 'a';
    if (n % 2 == 0)
        result[n - 1] = 'b';

    return result;
}