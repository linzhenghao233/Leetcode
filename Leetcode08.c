int myAtoi(char* s) {
    int index, symbol, end;
    long long num;
    index = num = 0;
    symbol = end = 200;

    if (s[0] != ' ' && !isdigit(s[0]) && s[0] != '+' && s[0] != '-')
        return 0;

    while (s[index] != '\0') {
        if (isdigit(s[index])) {
            num = num * 10 + (s[index] - '0');
            if (index < strlen(s) - 1 && isdigit(s[index]) && !isdigit(s[index + 1]))
                break;
            if (index < end) {
                if (index > 0 && s[index - 1] != ' ' && s[index - 1] != '+' && s[index - 1] != '-')
                    return 0;
                end = index;
            }
        }
        if (s[index] == '+' || s[index] == '-') {
            if (index < strlen(s) - 1 && !isdigit(s[index + 1]))
                return 0;
        }
        if (s[index] == '-')
            symbol = 0;
        index++;
        if (num > pow(2, 31))
            break;
    }

    if (symbol == 0) {
        if (num > pow(2, 31))
            return -pow(2, 31);
        return -num;
    }
    if (num > pow(2, 31) - 1)
        return pow(2, 31) - 1;
    return num;
}