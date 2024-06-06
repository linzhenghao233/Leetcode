int minOperations(int* nums, int numsSize, int k) {
    int result = 0;

    for (int i = 0; i < numsSize; i++)
        k ^= nums[i];

    for (int bit = 0; bit < 32; bit++) {
        if (k & (1U << bit))
            result++;
    }

    return result;
}