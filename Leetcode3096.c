int minimumLevels(int* possible, int possibleSize) {
    int* hash = (int*)calloc(possibleSize + 1, sizeof(int));
    int result = 0;
    int count = 0;

    for (int i = possibleSize - 1; i >= 0; i--) {
        if (possible[i])
            hash[i] = hash[i + 1] + 1;
        else
            hash[i] = hash[i + 1] - 1;
    }

    for (int i = 0; i < possibleSize - 1; i++) {
        count += possible[i] ? 1 : -1;
        result++;
        if (count > hash[i + 1]) {
            free(hash);
            return result;
        }
    }

    free(hash);
    return -1;
}