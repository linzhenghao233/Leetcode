int maxSubarraySumCircular(int* nums, int numsSize) {
    int minS = 0;
    int maxS = INT_MIN;
    int min_cur = 0;
    int max_cur = 0;
    int total = 0;

    for (int i = 0; i < numsSize; i++) {
        max_cur = max_cur > 0 ? max_cur + nums[i] : nums[i];
        maxS = max_cur > maxS ? max_cur : maxS;
        min_cur = min_cur < 0 ? min_cur + nums[i] : nums[i];
        minS = min_cur < minS ? min_cur : minS;

        total += nums[i];
    }

    if (total == minS)
        return maxS;

    return fmax(maxS, total - minS);
}