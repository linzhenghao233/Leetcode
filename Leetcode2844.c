int minimumOperations(char* num) {
    int len = strlen(num);
    int zero_flag = 0;

    for (int i = len - 1; i >= 0; i--) {
        if (num[i] == '0') {
            for (int j = i + 1; j < len; j++) {
                if (num[j] == '0')
                    return len - i - 2;
            }
            zero_flag = 1;
        }
        else if (num[i] == '2' || num[i] == '7') {
            for (int j = i + 1; j < len; j++) {
                if (num[j] == '5')
                    return len - i - 2;
            }
        }
        else if (num[i] == '5') {
            for (int j = i + 1; j < len; j++) {
                if (num[j] == '0')
                    return len - i - 2;
            }
        }
    }

    if (zero_flag)
        return len - 1;

    return len;
}