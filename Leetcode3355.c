bool isZeroArray(int* nums, int numsSize, int** queries, int queriesSize, int* queriesColSize) {
    int* diff = (int*)calloc(numsSize + 1, sizeof(int));

    for (int i = 0; i < queriesSize; i++) {
        int l = queries[i][0];
        int r = queries[i][1];
        diff[l]++;
        diff[r + 1]--;
    }

    int sum = 0;
    for (int i = 0; i < numsSize; i++) {
        sum += diff[i];
        if (sum < nums[i]) {
            free(diff);
            return false;
        }
    }

    free(diff);
    return true;
}