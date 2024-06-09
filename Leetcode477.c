int totalHammingDistance(int* nums, int numsSize) {
    int* hash = (int*)calloc(32, sizeof(int));
    int result = 0;

    for (int i = 0; i < numsSize; i++) {
        for (int bit = 0; bit < 32; bit++) {
            if (nums[i] & (1U << bit))
                hash[bit]++;
        }
    }

    for (int bit = 0; bit < 32; bit++)
        result += hash[bit] * (numsSize - hash[bit]);

    free(hash);
    return result;
}