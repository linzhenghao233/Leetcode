int fun(void* a, void* b) {
    return *(int*)a - *(int*)b;
}

int minimumDifference(int* nums, int numsSize, int k) {
    if (numsSize == 1)
        return 0;
    qsort(nums, numsSize, sizeof(int), fun);
    int min = nums[0];
    int max = nums[k - 1];
    int result;
    result = max - min;

    for (int i = k; i < numsSize; i++) {
        min = nums[i - k + 1];
        max = nums[i];
        if (max - min < result)
            result = max - min;
    }
    return result;
}