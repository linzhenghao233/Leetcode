long long countInterestingSubarrays(int* nums, int numsSize, int modulo, int k) {
    int* sum = (int*)malloc((numsSize + 1) * sizeof(int));
    int* cnt = (int*)calloc(fmin(numsSize + 1, modulo), sizeof(int));
    long long result = 0;
    sum[0] = 0;
    for (int i = 0; i < numsSize; i++) {
        sum[i + 1] = sum[i] + (nums[i] % modulo == k);
    }

    for (int i = 0; i <= numsSize; i++) {
        if (sum[i] >= k)
            result += cnt[(sum[i] - k) % modulo];
        cnt[sum[i] % modulo]++;
    }

    free(sum);
    free(cnt);
    return result;
}