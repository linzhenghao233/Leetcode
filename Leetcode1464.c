int cmp(const void* a, const void* b) {
    return *(int*)b - *(int*)a;
}

int maxProduct(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), cmp);
    return (nums[0] - 1) * (nums[1] - 1);
}