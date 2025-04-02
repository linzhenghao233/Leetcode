long long maximumTripletValue(int* nums, int numsSize) {
    long long result = 0;
    int max_diff = 0, max_pre = 0;

    for (int i = 0; i < numsSize; i++) {
        result = fmax(result, 1LL * max_diff * nums[i]);
        max_diff = fmax(max_diff, max_pre - nums[i]);
        max_pre = fmax(max_pre, nums[i]);
    }

    return result;
}