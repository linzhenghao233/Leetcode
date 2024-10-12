int duplicateNumbersXOR(int* nums, int numsSize) {
    int result = 0;
    int* hash = (int*)calloc(51, sizeof(int));

    for (int i = 0; i < numsSize; i++)
        hash[nums[i]]++;
    for (int i = 0; i < 51; i++) {
        if (hash[i] == 2)
            result ^= i;
    }

    free(hash);
    return result;
}