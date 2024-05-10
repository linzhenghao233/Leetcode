int longestNiceSubarray(int* nums, int numsSize) {
    int flag = 0;
    int result = 0;
    int left, right;
    left = right = 0;

    while (right < numsSize) {
        while (flag & nums[right]) {
            flag &= ~(nums[left]);
            left++;
        }
        flag |= nums[right];
        result = fmax(right - left + 1, result);
        right++;
    }
    return result;
}