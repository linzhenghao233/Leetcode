int numSubarrayProductLessThanK(int* nums, int numsSize, int k) {
    if (k <= 1)
        return 0;
    int window = 1;
    int result = 0;
    int left = 0, right = 0;

    while (right < numsSize) {
        window *= nums[right];

        while (left <= right && window >= k) {
            window /= nums[left];
            left++;
        }
        result += right - left + 1;
        right++;
    }
    return result;
}