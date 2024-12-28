int cmp(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

bool isPossibleToSplit(int* nums, int numsSize) {
    int nums1 = 0;
    int nums2 = 0;
    qsort(nums, numsSize, sizeof(int), cmp);

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != nums1)
            nums1 = nums[i];
        else if (nums[i] != nums2)
            nums2 = nums[i];
        else
            return false;
    }

    return true;
}