int countAsterisks(char* s) {
    int flag = 0;
    int len = strlen(s);
    int result = 0;

    for (int i = 0; i < len; i++) {
        if (s[i] == '|')
            flag++;
        if (flag == 1)
            continue;
        else if (flag == 2) {
            flag = 0;
            continue;
        }
        else if (s[i] == '*')
            result++;
    }

    return result;
}