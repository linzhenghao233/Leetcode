int cmp(const void* a, const void* b) {
    return (*(int**)a)[0] - (*(int**)b)[0];
}

int maxWidthOfVerticalArea(int** points, int pointsSize, int* pointsColSize) {
    qsort(points, pointsSize, sizeof(int*), cmp);
    int result = 0;

    for (int i = 1; i < pointsSize; i++) {
        if (points[i][0] - points[i - 1][0] > result)
            result = points[i][0] - points[i - 1][0];
    }

    return result;
}