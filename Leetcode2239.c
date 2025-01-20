int findClosestNumber(int* nums, int numsSize) {
    int result = nums[0];

    for (int i = 1; i < numsSize; i++) {
        if (abs(nums[i]) < abs(result)) {
            result = nums[i];
        }
        else if (abs(nums[i]) == abs(result)) {
            if (nums[i] > result)
                result = nums[i];
        }
    }

    return result;
}