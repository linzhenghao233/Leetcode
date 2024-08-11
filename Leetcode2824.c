int cmp(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

int countPairs(int* nums, int numsSize, int target) {
    int result = 0;
    qsort(nums, numsSize, sizeof(int), cmp);

    for (int i = 0; i < numsSize; i++) {
        int left = i + 1;
        int right = numsSize - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[i] + nums[mid] >= target)
                right = mid - 1;
            else {
                result += mid - left + 1;
                left = mid + 1;
            }
        }
    }

    return result;
}