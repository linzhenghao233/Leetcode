int minPartitions(char* n) {
    int result = -1;
    int len = strlen(n);

    for (int i = 0; i < len; i++) {
        if (n[i] == '9')
            return 9;
        if (n[i] - '0' > result)
            result = n[i] - '0';
    }

    return result;
}