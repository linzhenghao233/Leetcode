int numSubarraysWithSum(int* nums, int numsSize, int goal) {
    int window1 = 0, window2 = 0;
    int left1 = 0, left2 = 0, right = 0;
    int result = 0;

    while (right < numsSize) {
        window1 += nums[right];

        while (left1 <= right && window1 > goal) {
            window1 -= nums[left1];
            left1++;
        }
        window2 += nums[right];
        while (left2 <= right && window2 >= goal) {
            window2 -= nums[left2];
            left2++;
        }
        result += left2 - left1;
        right++;
    }
    return result;
}