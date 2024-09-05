char* clearDigits(char* s) {
    char* result = (char*)malloc(101 * sizeof(char));
    int top = 0;
    int len = strlen(s);

    for (int i = 0; i < len; i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            top--;
            if (top < 0)
                top = 0;
        }
        else {
            result[top] = s[i];
            top++;
        }
    }
    result[top] = '\0';

    return result;
}