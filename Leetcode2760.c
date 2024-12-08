int longestAlternatingSubarray(int* nums, int numsSize, int threshold) {
    int result = 0;
    int i = 0;

    while (i < numsSize) {
        if (nums[i] > threshold || nums[i] % 2) {
            i += 1;
            continue;
        }

        int start = i;
        i += 1;
        while (i < numsSize && nums[i] <= threshold && nums[i] % 2 != nums[i - 1] % 2)
            i += 1;
        result = fmax(result, i - start);
    }

    return result;
}