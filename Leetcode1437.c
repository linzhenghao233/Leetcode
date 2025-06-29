bool kLengthApart(int* nums, int numsSize, int k) {
    int pre = -1;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] && pre == -1) {
            pre = i;
            continue;
        }
        if (nums[i]) {
            if (i - pre <= k)
                return false;
            pre = i;
        }
    }

    return true;
}