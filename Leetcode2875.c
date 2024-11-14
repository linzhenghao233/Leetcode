int minSizeSubarray(int* nums, int numsSize, int target) {
    int result = INT_MAX;
    int left = 0;
    long temp = 0;
    long sum = 0;
    int circle = 0;

    for (int i = 0; i < numsSize; i++)
        sum += nums[i];
    circle = target / sum;

    for (int right = 0; right < numsSize * 2; right++) {
        temp += nums[right % numsSize];

        while (temp > target % sum) {
            temp -= nums[left % numsSize];
            left++;
        }

        if (temp == target % sum)
            result = fmin(result, right - left + 1);
    }

    return result == INT_MAX ? -1 : result + numsSize * circle;
}