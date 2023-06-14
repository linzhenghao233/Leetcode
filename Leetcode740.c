int deleteAndEarn(int* nums, int numsSize) {
    int* temp, * count, max_index = 0, max = 0;
    temp = (int*)malloc(10002 * sizeof(int));
    count = (int*)malloc(10002 * sizeof(int));
    memset(temp, 0, 10002 * sizeof(int));

    if (numsSize == 1)
        return nums[0];
    if (numsSize == 2) {
        if (nums[0] == nums[1])
            return 2 * nums[0];
        else if (abs(nums[0] - nums[1]) > 1)
            return nums[0] + nums[1];
        else
            return nums[0] > nums[1] ? nums[0] : nums[1];
    }

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] > max_index)
            max_index = nums[i];
        temp[nums[i]] += nums[i];
    }

    count[0] = temp[0];
    count[1] = temp[1];
    for (int i = 2; i - 1 <= max_index; i++) {
        count[i] = fmax(count[i - 1], count[i - 2] + temp[i]);
        if (count[i] > max)
            max = count[i];
    }
    free(temp);
    free(count);

    return max;
}