int cmp(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

int count(int num) {
    int result = 1;

    for (int i = num; i > num - 2; i--)
        result *= i;

    return result == 1 ? 1 : result / 2;
}

int numIdenticalPairs(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), cmp);
    int result = 0;
    int right = 0;

    while (right < numsSize) {
        int left = right;
        while (right < numsSize && nums[left] == nums[right])
            right++;
        result += count(right - left);
    }

    return result;
}