int lengthOfLongestSubsequence(int* nums, int numsSize, int target) {
    int* arr = (int*)malloc((target + 1) * sizeof(int));
    for (int i = 1; i <= target; i++)
        arr[i] = INT_MIN;
    arr[0] = 0;
    int sum = 0;

    for (int i = 0; i < numsSize; i++) {
        sum = fmin(sum + nums[i], target);
        for (int j = sum; j >= nums[i]; j--)
            arr[j] = fmax(arr[j], arr[j - nums[i]] + 1);
    }

    int result = arr[target] > 0 ? arr[target] : -1;
    free(arr);
    return result;
}