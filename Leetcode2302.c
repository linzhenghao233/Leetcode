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

/*25/04/28*/
long long countSubarrays(int* nums, int numsSize, long long k) {
    long long result = 0;
    long long sum = 0;
    int left = 0;
    int right = 0;

    while (right < numsSize) {
        sum += nums[right];
        int len = right - left + 1;
        while (sum * len >= k) {
            sum -= nums[left];
            left++;
            len = right - left + 1;
        }
        result += len;
        right++;
    }

    return result;
}