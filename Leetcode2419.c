int longestSubarray(int* nums, int numsSize) {
    int max = 0;
    int max_index = 0;
    int result = 0;
    int temp = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] >= max) {
            max = nums[i];
            max_index = i;
        }
    }

    for (int i = max_index; i >= 0; i--) {
        if (nums[i] != max) {
            result = fmax(temp, result);
            temp = -1;
        }
        temp++;
    }
    result = fmax(temp, result);

    return result;
}