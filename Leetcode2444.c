long long countSubarrays(int* nums, int numsSize, int minK, int maxK) {
    long long result = 0;
    int minI, maxI, i0;
    minI = maxI = i0 = -1;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == minK)
            minI = i;
        if (nums[i] == maxK)
            maxI = i;
        if (nums[i] < minK || nums[i] > maxK)
            i0 = i;

        result += fmax(fmin(minI, maxI) - i0, 0);
    }

    return result;
}