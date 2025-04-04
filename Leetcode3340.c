bool isBalanced(char* num) {
    int flag = 0;
    int len = strlen(num);

    for (int i = 0; i < len; i++) {
        if (i % 2)
            flag += (int)num[i] - '0';
        else
            flag -= (int)num[i] - '0';
    }

    return flag == 0;
}