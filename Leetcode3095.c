int minimumSubarrayLength(int* nums, int numsSize, int k) {
    int result = INT_MAX;
    int left = 0;
    int right = 0;
    int temp = 0;

    while (right < numsSize) {
        temp |= nums[right];

        if (temp >= k) {
            left = right - 1;
            temp = nums[right];
            while (temp < k) {
                temp |= nums[left];
                left--;
            }
            result = (right - left) < result ? (right - left) : result;
            printf("%d,", result);
        }
        right++;
    }

    return result == INT_MAX ? -1 : result;
}