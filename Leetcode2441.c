int cmp(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

int findMaxK(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), cmp);
    int left = 0;
    int right = numsSize - 1;

    while (left < right) {
        if (nums[left] > 0 || nums[right] < 0)
            break;
        if (nums[left] + nums[right] == 0) {
            return nums[right];
        }
        if (abs(nums[left]) > nums[right])
            left++;
        else
            right--;
    }

    return -1;
}