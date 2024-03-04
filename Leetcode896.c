bool isMonotonic(int* nums, int numsSize) {
    int flag = nums[0] <= nums[numsSize - 1] ? 1 : 0;

    if (flag) {
        for (int i = 1; i < numsSize; i++) {
            if (nums[i - 1] > nums[i])
                return false;
        }
    }
    else {
        for (int i = 1; i < numsSize; i++) {
            if (nums[i - 1] < nums[i])
                return false;
        }
    }

    return true;
}