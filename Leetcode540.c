int singleNonDuplicate(int* nums, int numsSize) {
    for (int i = 0; i < numsSize - 1; i += 2) {
        if (nums[i] != nums[i + 1])
            return nums[i];
    }

    return nums[numsSize - 1];
}