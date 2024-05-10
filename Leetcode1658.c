int minOperations(int* nums, int numsSize, int x) {
    int result = -1;
    int left, right;
    int flag;
    int count;
    left = right = count = flag = 0;

    for (int i = 0; i < numsSize; i++)
        flag += nums[i];
    flag -= x;

    if (flag < 0)
        return -1;

    while (right < numsSize) {
        count += nums[right];
        while (count > flag) {
            count -= nums[left];
            left++;
        }
        if (count == flag)
            result = fmax(right - left + 1, result);
        right++;
    }
    if (result == -1)
        return -1;
    return numsSize - result;
}