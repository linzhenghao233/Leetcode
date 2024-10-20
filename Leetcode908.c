int smallestRangeI(int* nums, int numsSize, int k) {
    int min = 10001;
    int max = -1;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] < min)
            min = nums[i];
        if (nums[i] > max)
            max = nums[i];
    }

    return (max - min - 2 * k) < 0 ? 0 : (max - min - 2 * k);
}