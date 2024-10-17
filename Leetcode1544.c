char* makeGood(char* s) {
    int top = -1;
    int len = strlen(s);

    for (int i = 0; i < len; i++) {
        if (top >= 0 && abs((int)s[top] - s[i]) == 32)
            top--;
        else
            s[++top] = s[i];
    }

    s[top + 1] = '\0';
    return s;
}