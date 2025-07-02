bool checkString(char* s) {
    char flag = 'a';
    int len = strlen(s);

    for (int i = 0; i < len; i++) {
        if (s[i] == 'b')
            flag = 'b';
        if (flag == 'b' && s[i] == 'a')
            return false;
    }

    return true;
}