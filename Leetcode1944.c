/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
/*int* canSeePersonsCount(int* heights, int heightsSize, int* returnSize) {
    int* result = (int*)malloc(heightsSize * sizeof(int));

    for (int i = 0; i < heightsSize; i++) {
        int max = 0;
        result[i] = 0;
        for (int j = i + 1; j < heightsSize; j++) {
            if (max >= heights[i])
                break;
            if (heights[j] > max) {
                result[i]++;
                max = heights[j];
            }
        }
    }
    *returnSize = heightsSize;
    return result;
}*/
//时间复杂度是O(n^2)，运行超时