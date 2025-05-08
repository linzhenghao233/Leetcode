int sumOfGoodNumbers(int* nums, int numsSize, int k) {
    int result = 0;

    for (int i = 0; i < numsSize; i++) {
        if ((i - k < 0 || nums[i] > nums[i - k]) && (i + k >= numsSize || nums[i] > nums[i + k]))
            result += nums[i];
    }

    return result;
}