int firstUniqChar(char* s) {
    int len = strlen(s);
    int flag = 0;

    for (int i = 0; i < len; i++) {
        if (s[i] == '0')
            continue;
        for (int j = i + 1; j < len; j++) {
            if (s[j] == '0')
                continue;
            if (s[i] == s[j]) {
                s[j] = '0';
                flag = 1;
            }
        }
        if (flag == 0)
            return i;
        flag = 0;
    }
    return -1;
}