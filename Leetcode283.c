void moveZeroes(int* nums, int numsSize) {
    int left, right;
    left = right = 0;

    while (left < numsSize) {
        if (nums[left] == 0) {
            right = left + 1;
            while (right < numsSize && nums[right] == 0)
                right++;
            if (right < numsSize) {
                nums[left] = nums[right];
                nums[right] = 0;
            }
        }
        left++;
    }
}