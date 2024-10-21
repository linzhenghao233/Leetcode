int cmp(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

int smallestRangeII(int* nums, int numsSize, int k) {
    qsort(nums, numsSize, sizeof(int), cmp);
    int result = nums[numsSize - 1] - nums[0];

    for (int i = 0; i < numsSize - 1; i++) {
        int max = fmax(nums[i] + k, nums[numsSize - 1] - k);
        int min = fmin(nums[0] + k, nums[i + 1] - k);

        result = fmin(result, max - min);
    }

    return result;
}