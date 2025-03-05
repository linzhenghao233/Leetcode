bool hasAllCodes(char* s, int k) {
    int len = strlen(s);
    int count = 1 << k;
    int* flag = (int*)calloc(count, sizeof(int));
    int cur = 0;
    bool result = true;

    for (int i = 0; i < len; i++) {
        cur = (cur << 1) + s[i] - '0';
        if (i < k - 1)
            continue;

        flag[cur]++;
        cur = cur - ((s[i - k + 1] - '0') << (k - 1));
    }

    for (int i = 0; i < count; i++) {
        if (flag[i] == 0) {
            result = false;
            break;
        }
    }

    free(flag);
    return result;
}