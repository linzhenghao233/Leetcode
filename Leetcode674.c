int findLengthOfLCIS(int* nums, int numsSize) {
    int left = 0;
    int right = 1;
    int result = 1;

    while (right < numsSize) {
        if (nums[right] > nums[right - 1]) {
            int temp = right - left + 1;
            result = temp > result ? temp : result;
        }
        else
            left = right;
        right++;
    }

    return result;
}