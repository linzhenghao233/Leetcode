int pivotIndex(int* nums, int numsSize) {
    int sum = 0;
    int temp = 0;

    for (int i = 0; i < numsSize; i++)
        sum += nums[i];
    for (int i = 0; i < numsSize; i++) {
        if (sum - temp - nums[i] == temp)
            return i;
        temp += nums[i];
    }

    return -1;
}