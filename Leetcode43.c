int chartoint(char* num) {
    int len = strlen(num);
    int result = 0;

    for (int i = 0; i < len; i++) {
        result *= 10;
        result += num[i] - '0';
    }

    return result;
}

char* multiply(char* num1, char* num2) {
    int temp = chartoint(num1) * chartoint(num2);//Ì«´À
    if (temp == 0) {
        char* result = (char*)malloc(sizeof(char) * 2);
        result[0] = '0';
        result[1] = '\0';
        return result;
    }
    int len = 0;
    int temp_len = temp;
    while (temp_len) {
        temp_len /= 10;
        len++;
    }
    char* result = (char*)malloc(sizeof(char) * (len + 1));
    result[len] = '\0';

    for (int i = len - 1; i >= 0; i--) {
        result[i] = '0' + temp % 10;
        temp /= 10;
    }

    return result;
}