int maxSubarrayLength(int* nums, int numsSize, int k) {
    int result = 0;
    int left, right;
    int min = 10e9 + 1;
    int max = 0;
    left = right = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] < min)
            min = nums[i];
        if (nums[i] > max)
            max = nums[i];
    }
    if (min == max)
        return k;
    int* hash = (int*)calloc(max - min + 1, sizeof(int));

    while (right < numsSize) {
        hash[nums[right] - min]++;
        while (hash[nums[right] - min] > k) {
            hash[nums[left] - min]--;
            left++;
        }
        result = fmax(right - left + 1, result);
        right++;
    }
    free(hash);
    return result;
}
//直接创建数组太大，遍历确定数组大小