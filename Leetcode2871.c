int maxSubarrays(int* nums, int numsSize) {
    int temp = ~0;
    int result = 0;

    for (int i = 0; i < numsSize; i++) {
        temp &= nums[i];
        if (temp == 0) {
            result++;
            temp = ~0;
        }
    }

    return fmax(result, 1);
}