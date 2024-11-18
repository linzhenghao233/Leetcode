/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findPeaks(int* mountain, int mountainSize, int* returnSize) {
    int* result = (int*)malloc(mountainSize / 2 * sizeof(int));
    *returnSize = 0;

    for (int i = 1; i < mountainSize - 1; i++) {
        if (mountain[i] > mountain[i - 1] && mountain[i] > mountain[i + 1]) {
            result[*returnSize] = i;
            (*returnSize)++;
        }
    }

    return result;
}