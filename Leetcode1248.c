int numberOfSubarrays(int* nums, int numsSize, int k) {
    int left1, left2, right;
    int sum1, sum2;
    int result;
    left1 = left2 = sum1 = sum2 = result = 0;

    while (right < numsSize) {
        if (nums[right] % 2 != 0)
            sum1++;
        while (left1 <= right && sum1 > k) {
            if (nums[left1] % 2 != 0)
                sum1--;
            left1++;
        }
        if (nums[right] % 2 != 0)
            sum2++;
        while (left2 <= right && sum2 >= k) {
            if (nums[left2] % 2 != 0)
                sum2--;
            left2++;
        }
        result += left2 - left1;
        right++;
    }
    return result;
}