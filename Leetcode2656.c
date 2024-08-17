int maximizeSum(int* nums, int numsSize, int k) {
    int max = 0;
    int result = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] > max)
            max = nums[i];
    }

    return max * k + k * (k - 1) / 2;
}