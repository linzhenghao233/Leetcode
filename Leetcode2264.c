char* largestGoodInteger(char* num) {
    int len = strlen(num);
    char* result = (char*)malloc(4 * sizeof(char));
    result[3] = '\0';
    int cnt = 1;
    char val = '0';
    bool space = false;

    for (int i = 1; i < len; i++) {
        if (num[i] != num[i - 1]) {
            cnt = 1;
            continue;
        }

        cnt += 1;
        if (cnt == 3 && num[i] >= val) {
            val = num[i];
            space = true;
        }
    }

    for (int i = 0; i < 3; i++)
        result[i] = val;

    return space ? result : "";
}