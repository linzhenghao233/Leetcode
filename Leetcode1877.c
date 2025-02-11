int cmp(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

int minPairSum(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), cmp);
    int result = 0;

    for (int i = 0; i < numsSize / 2; i++) {
        if (nums[i] + nums[numsSize - 1 - i] > result)
            result = nums[i] + nums[numsSize - 1 - i];
    }

    return result;
}