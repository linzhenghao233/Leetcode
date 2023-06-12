int rob(int* nums, int numsSize) {
    int* money, max = 0;
    money = (int*)malloc(numsSize * sizeof(int));
    money[0] = nums[0];
    if (numsSize == 1)
        return nums[0];
    if (numsSize > 1)
        money[1] = nums[1];
    if (numsSize == 2)
        return nums[0] > nums[1] ? nums[0] : nums[1];
    max = nums[0] > nums[1] ? nums[0] : nums[1];

    for (int i = 2; i < numsSize; i++) {
        if (i - 3 >= 0) {
            int temp = money[i - 2] >= money[i - 3] ? money[i - 2] : money[i - 3];
            money[i] = nums[i] + temp;
        }
        else
            money[i] = money[i - 2] + nums[i];

        if (money[i] > max)
            max = money[i];
    }

    return max;
}