int numberOfPoints(int** nums, int numsSize, int* numsColSize) {
    int* hash = (int*)calloc(101, sizeof(int));
    int result = 0;

    for (int i = 0; i < numsSize; i++) {
        for (int j = nums[i][0]; j <= nums[i][1]; j++)
            hash[j]++;
    }

    for (int i = 1; i < 101; i++) {
        if (hash[i] > 0)
            result++;
    }

    free(hash);
    return result;
}