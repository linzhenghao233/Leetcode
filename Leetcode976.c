int func(const void* a, const void* b) {
    return *(int*)b - *(int*)a;
}

int largestPerimeter(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(5), func);

    for (int i = 2; i < numsSize; i++) {
        if (nums[i - 2] + nums[i - 1] > nums[i] && nums[i - 2] + nums[i] > nums[i - 1] && nums[i - 1] + nums[i] > nums[i - 2])
            return nums[i - 2] + nums[i - 1] + nums[i];
    }
    return 0;
}