int cmp(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

int findValueOfPartition(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), cmp);
    int result = INT_MAX;

    for (int i = 1; i < numsSize; i++) {
        int temp = nums[i] - nums[i - 1];
        if (temp < result)
            result = temp;
    }

    return result;
}