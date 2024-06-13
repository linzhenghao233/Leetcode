long long sumDigitDifferences(int* nums, int numsSize) {
    long long result = 0;
    long long* hash = (long long*)calloc(10, sizeof(long long));

    while (nums[0]) {
        for (int i = 0; i < numsSize; i++) {
            hash[nums[i] % 10]++;
            nums[i] /= 10;
        }
        for (int i = 0; i < 9; i++) {
            for (int j = i + 1; j < 10; j++)
                result += hash[i] * hash[j];
            hash[i] = 0;
        }
        hash[9] = 0;
    }

    free(hash);
    return result;
}