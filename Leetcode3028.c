int returnToBoundaryCount(int* nums, int numsSize) {
    int result = 0;
    int flag = 0;

    for (int i = 0; i < numsSize; i++) {
        flag += nums[i];

        if (!flag)
            result++;
    }

    return result;
}