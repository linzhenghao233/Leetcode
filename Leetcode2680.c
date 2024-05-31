long long maximumOr(int* nums, int numsSize, int k) {
    long long left = 0;
    int* right = (int*)calloc(numsSize + 1, sizeof(int));
    long long result = 0;

    for (int i = numsSize - 1; i > 0; i--)
        right[i] = right[i + 1] | nums[i];
    for (int i = 0; i < numsSize; i++) {
        result = fmax(result, ((long long)nums[i] << k) | right[i + 1] | left);
        left |= nums[i];
    }

    free(right);
    return result;
}