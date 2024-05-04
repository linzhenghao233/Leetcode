int longestSubarray(int* nums, int numsSize) {
    int flag = 0;
    int result = 0;
    int temp = 0;
    int left = 0, right = 0;

    while (right < numsSize) {
        if (nums[right] == 0)
            flag++;
        while (flag > 1) {
            if (nums[left] == 0)
                flag--;
            left++;
        }
        temp = right - left;
        if (temp > result)
            result = temp;
        right++;
    }
    return result;
}