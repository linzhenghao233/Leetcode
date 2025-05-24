int findGCD(int* nums, int numsSize) {
    int min = INT_MAX;
    int max = INT_MIN;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] < min)
            min = nums[i];
        if (nums[i] > max)
            max = nums[i];
    }

    for (int i = min; i > 1; i--) {
        if (max % i == 0 && min % i == 0)
            return i;
    }

    return 1;
}