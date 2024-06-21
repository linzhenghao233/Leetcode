int cmp(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

int fun(int left, int right, int flag, int* nums) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] > flag)
            right = mid - 1;
        else
            left = mid + 1;
    }

    return left;
}

long long countFairPairs(int* nums, int numsSize, int lower, int upper) {
    long long result = 0;
    qsort(nums, numsSize, sizeof(int), cmp);

    for (int i = 0; i < numsSize; i++) {
        int left = i + 1;
        int right = numsSize - 1;

        result += fun(left, right, upper - nums[i], nums) - fun(left, right, lower - nums[i] - 1, nums);
    }

    return result;
}