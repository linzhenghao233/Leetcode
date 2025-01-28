int subarraySum(int* nums, int numsSize) {
    int result = 0;
    int* s = (int*)calloc(numsSize + 1, sizeof(int));

    for (int i = 0; i < numsSize; i++)
        s[i + 1] = s[i] + nums[i];

    for (int i = 0; i < numsSize; i++)
        result += s[i + 1] - s[i - nums[i] > 0 ? i - nums[i] : 0];

    free(s);
    return result;
}