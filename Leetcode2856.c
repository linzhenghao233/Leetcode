int minLengthAfterRemovals(int* nums, int numsSize) {
    int left = (numsSize - 1) / 2;
    int right = numsSize - 1;

    while (left >= 0 && right >= (numsSize - 1) / 2) {
        if (nums[right] > nums[left]) {
            numsSize -= 2;
            nums[left] = 0;
            left--;
            right--;
        }
        else
            left--;
    }

    return numsSize;
}