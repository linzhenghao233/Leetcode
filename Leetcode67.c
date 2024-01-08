char* addBinary(char* a, char* b) {
    int a_len = strlen(a);
    int b_len = strlen(b);
    int total = 0;

    if (a_len == 1 && b_len == 1 && a[0] == '0' && b[0] == '0') {
        char* result = (char*)malloc(2 * sizeof(char));
        result[0] = '0';
        result[1] = '\0';
        return result;
    }

    total = BinToDec(a, a_len) + BinToDec(b, b_len);

    int count = 0;
    int temp = total;
    while (temp > 0) {
        temp /= 2;
        count++;
    }
    char* result = (char*)malloc((count + 1) * sizeof(char));
    for (int i = count - 1; i >= 0; i--) {
        temp = total % 2;
        result[i] = temp + '0';
        total /= 2;
    }
    result[count] = '\0';
    return result;
}

int BinToDec(char* Bin, int len) {
    char* addBinary(char* a, char* b) {
        int a_len = strlen(a);
        int b_len = strlen(b);
        int max_len = a_len >= b_len ? a_len : b_len;
        char* result = (char*)malloc((max_len + 2) * sizeof(char));
        result[max_len + 1] = '\0';
        result[0] = '0';
        int add = 0;

        while (a_len > 0 || b_len > 0) {
            int sum = add;
            if (a_len > 0)
                sum += a[--a_len] - '0';
            if (b_len > 0)
                sum += b[--b_len] - '0';
            result[max_len--] = sum % 2 + '0';
            add = sum / 2;
        }
        if (add > 0)
            result[0] = '0' + add;
        if (result[0] == '0') {
            char* new_result = (char*)malloc(strlen(result) * sizeof(char));
            strcpy(new_result, result + 1);
            free(result);
            return new_result;
        }

        return result;
    }
    unsigned long long local = 1;
    int total = 0;
    for (int i = len - 1; i >= 0; i--) {
        total += (Bin[i] - '0') * local;
        local *= 2;
    }
    return total;
}//错的，转数字会溢出

char* addBinary(char* a, char* b) {
    int a_len = strlen(a);
    int b_len = strlen(b);
    int max_len = a_len >= b_len ? a_len : b_len;
    char* result = (char*)malloc((max_len + 2) * sizeof(char));
    result[max_len + 1] = '\0';
    result[0] = '0';
    int add = 0;

    while (a_len > 0 || b_len > 0) {
        int sum = add;
        if (a_len > 0)
            sum += a[--a_len] - '0';
        if (b_len > 0)
            sum += b[--b_len] - '0';
        result[max_len--] = sum % 2 + '0';
        add = sum / 2;
    }
    if (add > 0)
        result[0] = '0' + add;
    if (result[0] == '0') {
        char* new_result = (char*)malloc(strlen(result) * sizeof(char));
        strcpy(new_result, result + 1);
        free(result);
        return new_result;
    }

    return result;
}