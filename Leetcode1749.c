int maxAbsoluteSum(int* nums, int numsSize) {
    int max, min, result;
    max = min = result = 0;

    for (int i = 0; i < numsSize; i++) {
        max = max > 0 ? (max + nums[i]) : nums[i];
        min = min < 0 ? (min + nums[i]) : nums[i];
        int temp = max > (-min) ? max : (-min);
        result = temp > result ? temp : result;
    }

    return result;
}