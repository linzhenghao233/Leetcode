int cmp(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

int maximumBeauty(int* nums, int numsSize, int k) {
    int result = 0;
    int left = 0;
    int right = 0;
    qsort(nums, numsSize, sizeof(int), cmp);

    while (right < numsSize) {
        while (nums[right] - nums[left] > k + k)
            left++;
        result = fmax(result, right - left + 1);
        right++;
    }

    return result;
}