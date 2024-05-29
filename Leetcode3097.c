int minimumSubarrayLength(int* nums, int numsSize, int k) {
    int left = 0, right = 0;
    int result = INT_MAX;
    int current = 0, temp = 0;

    while (right < numsSize) {
        if (nums[right] >= k)
            return 1;
        left = right - 1;
        while (left >= 0) {
            if ((nums[left] | nums[right]) == nums[left])
                break;
            nums[left] |= nums[right];
            if (nums[left] >= k)
                result = fmin(result, right - left + 1);
            left--;
        }
        right++;
    }

    return result == INT_MAX ? -1 : result;
}