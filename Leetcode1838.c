int func(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

int maxFrequency(int* nums, int numsSize, int k) {
    int result;
    int left, right;
    int max;
    long count;
    result = left = right = max = count = 0;
    qsort(nums, numsSize, sizeof(int), func);

    while (right < numsSize) {
        max = nums[right];
        count += nums[right];
        while ((count + k) / (right - left + 1) < max) {
            count -= nums[left];
            left++;
        }
        result = fmax(result, right - left + 1);
        right++;
    }
    return result;
}