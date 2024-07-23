/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countPoints(int** points, int pointsSize, int* pointsColSize, int** queries, int queriesSize, int* queriesColSize, int* returnSize) {
    int* result = (int*)calloc(queriesSize, sizeof(int));

    for (int i = 0; i < queriesSize; i++) {
        int qx = queries[i][0];
        int qy = queries[i][1];
        int target = queries[i][2] * queries[i][2];
        for (int j = 0; j < pointsSize; j++) {
            int px = points[j][0];
            int py = points[j][1];
            if ((qx - px) * (qx - px) + (qy - py) * (qy - py) <= target)
                result[i]++;
        }
    }

    *returnSize = queriesSize;
    return result;
}