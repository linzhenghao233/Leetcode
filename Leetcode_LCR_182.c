char* dynamicPassword(char* password, int target) {
    int len = strlen(password);
    char* result = (char*)calloc(len + 1, sizeof(char));

    for (int i = 0; i < len; i++)
        result[i] = password[(target + i) % len];

    return result;
}