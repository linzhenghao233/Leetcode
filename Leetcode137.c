int singleNumber(int* nums, int numsSize) {
    int* hash = (int*)calloc(32, sizeof(int));
    int result = 0;

    for (int i = 0; i < numsSize; i++) {
        for (int bit = 0; bit < 32; bit++)
            hash[bit] += nums[i] >> bit & 1;
    }

    for (int bit = 0; bit < 32; bit++) {
        if (hash[bit] % 3 != 0)
            result |= (long)1 << bit;
    }

    free(hash);
    return result;
}