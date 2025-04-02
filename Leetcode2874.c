long long maximumTripletValue(int* nums, int numsSize) {
    long long result = 0;
    int max_diff = 0, pre_max = 0;

    for (int i = 0; i < numsSize; i++) {
        result = fmax(result, 1LL * max_diff * nums[i]);
        max_diff = fmax(max_diff, pre_max - nums[i]);
        pre_max = fmax(pre_max, nums[i]);
    }

    return result;
}