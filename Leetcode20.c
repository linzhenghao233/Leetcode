bool isValid(char* s) {
    int len = strlen(s);
    int top = 0;
    char* ch = (char*)malloc((len + 1) * sizeof(char));
    ch[0] = s[0];

    for (int i = 1; i < len; i++) {
        if (top > -1) {
            if (s[i] == ')' && ch[top] == '(') {
                top--;
                continue;
            }
            else if (s[i] == ']' && ch[top] == '[') {
                top--;
                continue;
            }
            else if (s[i] == '}' && ch[top] == '{') {
                top--;
                continue;
            }
        }
        top++;
        ch[top] = s[i];
    }
    if (top != -1)
        return false;
    else
        return true;
}