int maxDistance(int** arrays, int arraysSize, int* arraysColSize) {
    int result = 0;
    int min = INT_MAX / 2;
    int max = INT_MIN / 2;

    for (int i = 0; i < arraysSize; i++) {
        int x = arrays[i][0];
        int y = arrays[i][arraysColSize[i] - 1];

        result = fmax(result, fmax(y - min, max - x));
        min = fmin(min, x);
        max = fmax(max, y);
    }

    return result;
}