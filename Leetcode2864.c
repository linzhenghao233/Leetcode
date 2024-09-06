char* maximumOddBinaryNumber(char* s) {
    int len = strlen(s);
    char* result = (char*)malloc((len + 1) * sizeof(char));
    int count = 0;
    memset(result, '0', len * sizeof(char));

    for (int i = 0; i < len; i++) {
        if (s[i] == '1')
            count++;
    }
    if (count) {
        result[len] = '\0';
        result[len - 1] = '1';
        count--;
    }
    int index = 0;
    while (count) {
        result[index++] = '1';
        count--;
    }

    return result;
}