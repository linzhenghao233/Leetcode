int triangularSum(int* nums, int numsSize) {
    for (int i = numsSize; i > 0; i--) {
        for (int j = 0; j < i - 1; j++) {
            int temp = (nums[j] + nums[j + 1]) % 10;
            nums[j] = temp;
        }
    }

    return nums[0];
}