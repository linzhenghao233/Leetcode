char* robotWithString(char* s) {
    int len = strlen(s);
    char* min = (char*)malloc((len + 1) * sizeof(char));
    min[len] = 'z';
    for (int i = len - 1; i >= 0; i--) {
        min[i] = fmin(min[i + 1], s[i]);
    }

    int index = 0;
    int top = -1;
    for (int i = 0; i < len; i++) {
        min[++top] = s[i];
        while (top >= 0 && min[top] <= min[i + 1]) {
            s[index++] = min[top--];
        }
    }

    free(min);
    return s;
}