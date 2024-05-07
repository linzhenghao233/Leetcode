int maximumUniqueSubarray(int* nums, int numsSize) {
    int* hash = (int*)calloc(10000, sizeof(int));
    int result = 0;
    int temp = 0;
    int left, right;
    left = right = 0;

    while (right < numsSize) {
        while (hash[nums[right] - 1] != 0) {
            hash[nums[left] - 1]--;
            temp -= nums[left];
            left++;
        }
        temp += nums[right];
        hash[nums[right] - 1]++;
        result = temp > result ? temp : result;
        right++;
    }
    free(hash);
    return result;
}