double findMaxAverage(int* nums, int numsSize, int k) {
    double result;
    double window = 0;
    int i;

    for (i = 0; i < k; i++) {
        window += nums[i];
    }
    result = window / k;

    for (; i < numsSize; i++) {
        if (window / k > result)
            result = window / k;
        window += nums[i] - nums[i - k];
    }
    if (window / k > result)
        result = window / k;
    return result;
}