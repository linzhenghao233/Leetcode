int func(int num) {
    if (num <= 1)
        return 0;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }

    return 1;
}

int maximumPrimeDifference(int* nums, int numsSize) {
    int left = numsSize;
    int right = -1;

    for (int i = 0; i < numsSize; i++) {
        if (func(nums[i])) {
            if (i < left)
                left = i;
            if (i > right)
                right = i;
        }
    }

    return right - left;
}