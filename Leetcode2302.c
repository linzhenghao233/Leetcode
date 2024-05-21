long long countSubarrays(int* nums, int numsSize, long long k) {
    long long count = 0;
    long long result = 0;
    int left = 0, right = 0;

    while (right < numsSize) {
        count += nums[right];

        while (left <= right && count * (right - left + 1) >= k) {
            count -= nums[left];
            left++;
        }
        result += right - left + 1;
        right++;
    }
    return result;
}