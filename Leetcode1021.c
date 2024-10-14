char* removeOuterParentheses(char* s) {
    int sum = 0;
    int index = 0;
    int len = strlen(s);

    for (int i = 0; i < len; i++) {
        if (s[i] == '(')
            sum += 1;
        else
            sum -= 1;

        if (s[i] == '(' && sum > 1)
            s[index++] = '(';
        else if (s[i] == ')' && sum > 0)
            s[index++] = ')';
    }

    s[index] = '\0';
    return s;
}