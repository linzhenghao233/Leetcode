int cmp(const void* a, const void* b) {
    return *(int*)b - *(int*)a;
}

int reductionOperations(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), cmp);
    int result = 0;
    int factor = 0;
    int left = 0;
    int right = 0;

    for (int i = 1; i < numsSize; i++) {
        if (nums[i] != nums[i - 1])
            factor++;
    }
    if (factor == 0)
        return 0;

    while (right < numsSize) {
        while (right < numsSize && nums[left] == nums[right]) {
            right++;
        }

        result += (right - left) * factor;
        factor--;
        left = right;
    }

    return result;
}