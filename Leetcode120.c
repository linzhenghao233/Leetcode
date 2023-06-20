int minimumTotal(int** triangle, int triangleSize, int* triangleColSize) {
    int min = 10001;

    if (triangleSize == 1)
        return triangle[0][0];

    for (int i = 1; i < triangleSize; i++) {
        for (int j = 0; j < triangleColSize[i]; j++) {
            if (j == 0)
                triangle[i][j] += triangle[i - 1][j];
            else if (j == i)
                triangle[i][j] += triangle[i - 1][j - 1];
            else {
                int num = triangle[i - 1][j - 1] < triangle[i - 1][j] ? triangle[i - 1][j - 1] : triangle[i - 1][j];
                triangle[i][j] += num;
            }

            if (i == triangleSize - 1) {
                if (triangle[i][j] < min)
                    min = triangle[i][j];
            }
        }
    }
    return min;
}