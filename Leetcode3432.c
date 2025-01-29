int countPartitions(int* nums, int numsSize) {
    int result = 0;
    int Fsum = 0;
    int Tsum = 0;

    for (int i = 0; i < numsSize; i++)
        Fsum += nums[i];
    for (int i = numsSize - 1; i > 0; i--) {
        Tsum += nums[i];
        Fsum -= nums[i];
        if ((Fsum % 2) == (Tsum % 2))
            result += 1;
    }

    return result;
}