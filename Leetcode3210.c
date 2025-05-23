char* getEncryptedString(char* s, int k) {
    int len = strlen(s);
    char* result = (char*)malloc((len + 1) * sizeof(char));

    for (int i = 0; i < len; i++) {
        int index = (i + k) % len;
        result[i] = s[index];
    }
    result[len] = '\0';

    return result;
}