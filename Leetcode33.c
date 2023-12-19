int search(int* nums, int numsSize, int target) {
    int res, pos, left, right;
    res = -1;
    pos = numsSize / 2;
    left = 0;
    right = numsSize - 1;

    while (left < right) {
        if (nums[left] == target)
            return left;
        else if (nums[right] == target)
            return right;
        if (nums[pos] > nums[left]) {
            if (target >= nums[left] && target <= nums[right])
        }
    }
}