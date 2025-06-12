int maxSum(int* nums, int numsSize) {
    int cnt[101] = { 0 };
    int result = 0;
    bool flag = true;
    int min = INT_MIN;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] >= 0 && cnt[nums[i]] == 0) {
            cnt[nums[i]]++;
            result += nums[i];
            flag = false;
        }
        else if (nums[i] < 0 && nums[i] > min) {
            min = nums[i];
        }
    }

    if (flag)
        return min;

    return result;
}