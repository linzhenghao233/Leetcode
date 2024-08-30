long long sumDigitDifferences(int* nums, int numsSize) {
    long long result = 0;
    int* hash = (int*)calloc(10, sizeof(int));

    while (nums[0]) {
        memset(hash, 0, 10 * sizeof(int));
        for (int i = 0; i < numsSize; i++) {
            hash[nums[i] % 10]++;
            nums[i] /= 10;
        }

        for (int i = 0; i < 10; i++) {
            if (hash[i])
                result += (long long)hash[i] * (long long)(numsSize - hash[i]);
        }
    }
    free(hash);

    return result / 2;
}