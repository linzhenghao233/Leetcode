int findNonMinOrMax(int* nums, int numsSize) {
    if (numsSize < 3)
        return -1;
    int min = INT_MAX;
    int mid = 0;
    int max = INT_MIN;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] < min) {
            mid = min;
            min = nums[i];
        }
        if (nums[i] > max) {
            mid = max;
            max = nums[i];
        }
        if (nums[i] > min && nums[i] < max) {
            mid = nums[i];
        }
    }

    return mid;
}