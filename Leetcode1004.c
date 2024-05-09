int longestOnes(int* nums, int numsSize, int k) {
    int left, right;
    int count_0;
    int result;
    left = right = count_0 = result = 0;

    while (right < numsSize) {
        if (!nums[right])
            count_0++;
        while (count_0 > k) {
            if (!nums[left])
                count_0--;
            left++;
        }
        result = fmax(right - left + 1, result);
        right++;
    }
    return result;
}