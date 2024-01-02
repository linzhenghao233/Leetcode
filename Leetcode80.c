int removeDuplicates(int* nums, int numsSize) {
    int result, left, right;
    left = 2;
    right = 2;

    if (numsSize <= 2)
        return numsSize;

    while (right < numsSize) {
        if (nums[left - 2] != nums[right]) {
            nums[left] = nums[right];
            left++;
        }
        right++;
    }
    return left;
}