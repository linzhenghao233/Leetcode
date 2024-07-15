int cmp(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

int findLHS(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), cmp);
    int left = 0, right = 1;
    int result = 0;

    while (right < numsSize) {
        while (left <= right && nums[right] - nums[left] > 1)
            left++;
        if (nums[right] - nums[left] == 1)
            result = fmax(result, right - left + 1);
        right++;
    }

    return result;
}