int minimumRecolors(char* blocks, int k) {
    int result = 0;
    int window = 0;
    int i = 0;

    for (; i < k; i++) {
        if (blocks[i] == 'W')
            window++;
    }
    result = window;

    for (; i < strlen(blocks); i++) {
        if (blocks[i] == 'W')
            window++;
        if (blocks[i - k] == 'W')
            window--;
        if (window < result)
            result = window;
    }
    return result;
}