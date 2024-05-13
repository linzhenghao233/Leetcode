int longestEqualSubarray(int* nums, int numsSize, int k) {
    int* hash = (int*)calloc(numsSize, sizeof(int));
    int left, right;
    int result;
    int count;
    int max_num;
    left = right = result = count = max_num = 0;

    while (right < numsSize) {
        hash[nums[right] - 1]++;
        if (hash[nums[right] - 1] > result) {
            result = hash[nums[right] - 1];
            max_num = nums[right];
        }
        count++;
        while (count - result > k) {
            if (nums[left] == max_num)
                result--;
            hash[nums[left] - 1]--;
            count--;
            left++;
        }
        result = fmax(right - left + 1 - result, result);
        right++;
    }
    free(hash);
    return result;
}