int cmp(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

int partitionArray(int* nums, int numsSize, int k) {
    qsort(nums, numsSize, sizeof(int), cmp);
    int result = 0;
    int min = INT_MIN / 2;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] - min > k) {
            min = nums[i];
            result++;
        }
    }

    return result;
}