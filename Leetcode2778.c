int sumOfSquares(int* nums, int numsSize) {
    int result = 0;

    for (int i = 0; i < numsSize; i++) {
        if (numsSize % (i + 1) == 0)
            result += nums[i] * nums[i];
    }

    return result;
}