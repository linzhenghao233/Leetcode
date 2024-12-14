bool canPartition(int* nums, int numsSize) {
    int sum = 0;
    for (int i = 0; i < numsSize; i++)
        sum += nums[i];
    if (sum % 2)
        return false;
    else
        sum /= 2;

    bool* f = (bool*)calloc(sum + 1, sizeof(bool));
    f[0] = true;
    int s2 = 0;
    for (int i = 0; i < numsSize; i++) {
        int x = nums[i];
        s2 = fmin(s2 + x, sum);
        for (int j = s2; j >= x; j--)
            f[j] |= f[j - x];
        if (f[sum]) {
            free(f);
            return true;
        }
    }

    free(f);
    return false;
}