int minSubArrayLen(int target, int* nums, int numsSize) {
    int left, right;
    int result;
    int flag;
    left = right = flag = 0;
    result = INT_MAX;

    while (right < numsSize) {
        flag += nums[right];
        while (flag >= target) {
            result = fmin(right - left + 1, result);
            flag -= nums[left];
            left++;
        }
        right++;
    }
    return result == INT_MAX ? 0 : result;
}