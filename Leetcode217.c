int cmp(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

bool containsDuplicate(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), cmp);
    int index = 1;

    while (index < numsSize) {
        if (nums[index] == nums[index - 1])
            return true;
        index++;
    }

    return false;
}