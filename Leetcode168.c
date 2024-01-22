char* convertToTitle(int columnNumber) {
    int len = 0;
    int temp = columnNumber;

    do {
        len++;
        temp = (temp - 1) / 26;
    } while (temp > 0);

    char* result = (char*)malloc((len + 1) * sizeof(char));
    result[len] = '\0';

    for (int i = len - 1; i >= 0; i--) {
        temp = (columnNumber - 1) % 26;
        result[i] = temp + 'A';
        columnNumber = (columnNumber - 1) / 26;
    }

    return result;
}