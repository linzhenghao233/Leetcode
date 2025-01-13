int waysToSplitArray(int* nums, int numsSize) {
    long sum = 0;
    long cnt = 0;
    int result = 0;

    for (int i = 0; i < numsSize; i++)
        sum += nums[i];

    for (int i = 0; i < numsSize - 1; i++) {
        cnt += nums[i];
        if (cnt * 2 >= sum)
            result++;
    }

    return result;
}