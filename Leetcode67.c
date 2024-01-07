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
    unsigned long long local = 1;
    int total = 0;
    for (int i = len - 1; i >= 0; i--) {
        total += (Bin[i] - '0') * local;
        local *= 2;
    }
    return total;
}//错的，转数字会溢出