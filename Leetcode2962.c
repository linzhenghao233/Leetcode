long long countSubarrays(int* nums, int numsSize, int k) {
    int max_num = 0;
    long long result = 0;
    int window = 0;
    int left = 0, right = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] > max_num)
            max_num = nums[i];
    }

    while (right < numsSize) {
        if (nums[right] == max_num)
            window++;

        while (window >= k) {
            result += numsSize - right;
            if (nums[left] == max_num)
                window--;
            left++;
        }
        right++;
    }
    return result;
}