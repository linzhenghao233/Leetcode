char* stringHash(char* s, int k) {
    int len = strlen(s);
    char* result = (char*)malloc((len / k + 1) * sizeof(char));
    int index = 0;

    for (int i = 0; i < len; i += k) {
        int sum = 0;
        for (int j = i; j < i + k; j++)
            sum += (int)s[j] - 'a';
        result[index++] = 'a' + sum % 26;
    }
    result[index] = '\0';

    return result;
}