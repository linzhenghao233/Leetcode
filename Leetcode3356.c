int minZeroArray(int* nums, int numsSize, int** queries, int queriesSize, int* queriesColSize) {
    int* diff = (int*)calloc(numsSize + 1, sizeof(int));
    int sum = 0;
    int k = 0;

    for (int i = 0; i < numsSize; i++) {
        int x = nums[i];
        sum += diff[i];

        while (k < queriesSize && sum < x) {
            int l = queries[k][0];
            int r = queries[k][1];
            int val = queries[k][2];
            diff[l] += val;
            diff[r + 1] -= val;
            if (l <= i && i <= r) {
                sum += val;
            }
            k++;
        }
        if (sum < x) {
            return -1;
        }
    }

    return k;
}