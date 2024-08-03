//Ã»Ð´³öÀ´

int cmp(const void* a, const void* b) {
    return (*(int**)a)[0] - (*(int**)b)[0];
}

int maxPointsInsideSquare(int** points, int pointsSize, int* pointsColSize, char* s) {
    int result = 0;
    int* hash = (int*)calloc(26, sizeof(int));

    for (int i = 0; i < pointsSize; i++) {
        points[i][0] = fmax(abs(points[i][0]), abs(points[i][1]));
        points[i][1] = s[i] - 'a';
    }
    qsort(points, pointsSize, sizeof(int*), cmp);

    int count = 1;
    for (int i = 1; i < pointsSize; i++) {
        if (points[i][0] != points[i - 1][0]) {
            result += count;
            count = 0;
        }
        if (hash[points[i][1]] > 1) {
            free(hash);
            return result;
        }
        count++;
    }

    free(hash);
    return pointsSize;
}