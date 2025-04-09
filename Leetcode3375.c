int minOperations(int* nums, int numsSize, int k) {
    int min = INT_MAX;
    int cnt[101] = { 0 };
    int result = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] < min)
            min = nums[i];
        if (min < k)
            return -1;
        if (cnt[nums[i]] == 0 && nums[i] > k) {
            cnt[nums[i]]++;
            result++;
        }
    }

    return result;
}