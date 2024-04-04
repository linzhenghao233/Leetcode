int maxSubArray(int* nums, int numsSize) {
    int result = nums[0];
    int temp = nums[0];

    for (int i = 1; i < numsSize; i++) {
        temp = (temp + nums[i]) > nums[i] ? (temp + nums[i]) : nums[i];

        if (temp > result)
            result = temp;
    }
    return result;
}