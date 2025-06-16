int maximumDifference(int* nums, int numsSize) {
    int* tail_max = (int*)calloc(numsSize + 1, sizeof(int));
    int result = -1;

    for (int i = numsSize - 1; i >= 0; i--) {
        if (nums[i] > tail_max[i + 1])
            tail_max[i] = nums[i];
        else
            tail_max[i] = tail_max[i + 1];
    }

    for (int i = 0; i < numsSize; i++) {
        if (tail_max[i + 1] > nums[i]) {
            int n = tail_max[i + 1] - nums[i];
            if (n > result)
                result = n;
        }
    }

    free(tail_max);
    return result;
}