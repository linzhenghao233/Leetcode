int findMin(int* nums, int numsSize) {
    int left = 0;
    int right = numsSize - 1;
    int mid;
    int min = nums[left] <= nums[right] ? nums[left] : nums[right];

    if (nums[left] < nums[right] || numsSize <= 2)
        return min;

    while (left <= right) {
        mid = left + (right - left) / 2;
        if (nums[mid] < min)
            min = nums[mid];
        if (nums[mid] < nums[right])
            right = mid - 1;
        else
            left = left + 1;
    }
    return min;
}