int repeatedNTimes(int* nums, int numsSize) {
    int cnt[10001] = { 0 };

    for (int i = 0; i < numsSize; i++) {
        cnt[nums[i]]++;
        if (cnt[nums[i]] > 1)
            return nums[i];
    }

    return 0;
}