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
    int temp = chartoint(num1) * chartoint(num2);//太蠢
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
    int num1_int = chartoint(num1);
    int num2_int = chartoint(num2);
    int product = num1_int * num2_int;
    int len = 0;
    int temp;

    if (product == 0) {
        char* result = (char*)malloc(sizeof(char) * 2);
        result[0] = '0';
        result[1] = '\0';
        return result;
    }
    else {
        temp = product;
        while (temp != 0) {
            len++;
            temp /= 10;
        }
    }

    char* result = (char*)malloc(sizeof(char) * (len + 1));
    for (int i = len - 1; i >= 0; i--) {
        temp = product % 10;
        product /= 10;
        result[i] = '0' + temp;
    }
    result[len] = '\0';
    return result;
}
//时隔很久，又犯了同意的错误，不是char转int后直接相乘